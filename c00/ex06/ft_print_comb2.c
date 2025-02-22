#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combo2()
{
    int num1 = 0;
    int num2 = 0;
    char comma = ',';
    char space = ' ';

    while (num1 <= 98)
    {
        while (num2 <= 99)
        {
            ft_putchar(num1 / 10 + 48);
            ft_putchar(num1 % 10 + 48);
            ft_putchar(space);
            ft_putchar(num2 / 10 + 48);
            ft_putchar(num2 % 10 + 48);
            ft_putchar(comma);
            ft_putchar(space);
            num2++;
        }
        num1++;
        num2 = num1 + 1;
    }
}
void main()
{
    ft_print_combo2();
}
