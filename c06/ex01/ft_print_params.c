#include <unistd.h>
#include <stdio.h>

void ft_putchar(char str)
{
    write(1, &str, 1);
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
}
int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = 0;
    // while (i < argc)
    // {
    //     printf("%s\n", argv[i]);
    //     i++;
    // }

    while (i < argc)
    {
        while (j < ft_strlen(argv[i]))
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }
    return (0);
}