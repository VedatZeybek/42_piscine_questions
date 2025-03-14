#include <stdlib.h>

int get_len(int nbr)
{
    int count = 0;
    long num = nbr;

    if (nbr < 0)
    {
        count = 1;
        num = -nbr;
    }

    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int nbr)
{
    char *result;
    int len;
    int i = 0;

    len = get_len(nbr);

    result = (char *)malloc(len + 1);
    if (!result)
        return NULL;
    if (nbr == 0)
    {
        result[0] = '0';
        result[1] = '\0';
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr *= -1;
    }
    i = len - 1;
    result[i + 1] = '\0';
    while (i >= 0)
    {
        result[i] = (nbr % 10) + '0';
        nbr /= 10;
        i--;
    }
    return (result);
}

#include <stdio.h>

int main()
{
    int number = 223;
    char *str = ft_itoa(number);
    printf("%d \n", get_len(223));
    printf("String: %s\n", str);
    free(str); // Belleği serbest bırak
    return 0;
}