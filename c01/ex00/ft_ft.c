#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void main()
{
    int number;
    ft_ft(&number);
    printf("%d", number);
}