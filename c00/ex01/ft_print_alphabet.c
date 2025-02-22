#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet()
{
    char alphabet = 'a';
    while (alphabet <= 122)
    {
        write(1, &alphabet, 1);
        alphabet++;
    }
}

void main()
{
    ft_print_alphabet();
}