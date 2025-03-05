#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
    int i;
    int j;

    if (x <= 0 || y <= 0)
        return;

    i = 0;
    while (i < x)
    {
        j = 0;
        while (j < y)
        {
            if ((j == 0) && (i == 0 || i == x - 1))
                ft_putchar('A');
            else if ((j == y - 1) && (i == 0 || i == x - 1))
                ft_putchar('C');
            else if ((j == 0 || j == y - 1) || (i == 0 || i == x - 1))
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}