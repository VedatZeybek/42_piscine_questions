#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str != ' ')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    int number = ft_strlen("Abi ben c01 bizim evo borcunu ode ç.");
    printf("%d", number);
    return 0;
}