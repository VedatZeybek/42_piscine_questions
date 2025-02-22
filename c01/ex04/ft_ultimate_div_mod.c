#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{

    int mod;
    int div;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

void main()
{
    int a = 20;
    int b = 7;
    int div;
    int mod;

    ft_ultimate_div_mod(&a, &b);
    printf("a: %d, b: %d", a, b);
}