#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet()
{
    char alphabet = 'z';
    while (alphabet >= 97)
    {
        write(1, &alphabet, 1);
        alphabet--;
    }
}
void main()
{
    ft_print_reverse_alphabet();
}