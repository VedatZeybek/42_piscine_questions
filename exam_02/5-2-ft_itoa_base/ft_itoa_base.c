#include <stdlib.h>

int is_valid_base(int base)
{
    if (base < 2 || base > 16)
        return (0);
    return (1);
}

int get_digit_count(int nbr, int base)
{
    long num;
    int count = 0;

    num = nbr;
    if (num == 0)
        return (1);
    if (num < 0)
    {
        count = 1;
        num *= -1;
    }
    while (num > 0)
    {
        num /= base;
        count++;
    }
    return (count);
}

char *ft_itoa_base(int nbr, int base)
{
    char *baseString = "0123456789ABCDEF";
    char *result;
    int len = get_digit_count(nbr, base);
    int i;

    if (!is_valid_base(base))
        return ('\0');
    result = (char *)malloc(len + 1);
    i = len - 1;
    result[i + 1] = '\0';
    while (i >= 0)
    {
        result[i] = baseString[nbr % base];
        nbr /= base;
        i--;
    }
    return (result);
}
#include <stdio.h>
int main()
{
    char *a = ft_itoa_base(20, 2);
    printf("%s", a);
}