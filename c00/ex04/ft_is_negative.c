#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n)
{
    char c = 'P';
    if (n < 0)
    {
        c = 'N';
        write(1, &c, 1);
    }

    else
        write(1, &c, 1);
}

void main()
{
    ft_is_negative(0);
}