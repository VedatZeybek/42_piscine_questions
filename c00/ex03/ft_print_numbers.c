#include <unistd.h>
#include <stdio.h>

void ft_print_numbers()
{
    char number = '0';
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}

void main()
{
    ft_print_numbers();
}

// #include <unistd.h>
// #include <stdio.h>

// void ft_print_numbers()
// {
//     int number = 0;  // Bu, sayısal 0 değerini kullanır
//     while (number <= 9)
//     {
//         char c = '0' + number;  // Sayıyı karaktere dönüştür
//         write(1, &c, 1);
//         number++;
//     }
// }

// void main()
// {
//     ft_print_numbers();
// }