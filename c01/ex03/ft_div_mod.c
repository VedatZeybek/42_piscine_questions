#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b;
    *mod = a % b;
}

// void main()
// {
//     int a = 20;
//     int b = 5;
//     int *div;
//     int *mod;
//     ft_div_mod(a, b, div, mod);
//     printf("a: %d, b: %d, div: %d, mod: %d", &a, &b, div, mod);
// }   //hatalı kod

void main()
{
    int a = 20;
    int b = 5;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("a: %d, b: %d, div: %d, mod: %d", a, b, div, mod);
}