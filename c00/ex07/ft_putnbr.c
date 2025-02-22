#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648) // -2147483648 durumunu özel ele al
    {
        write(1, "-2147483648", 11);
        return;
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
    else
        ft_putchar(nb + '0');
}

// int factroiel(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factroiel(n - 1);
// }

int main()
{
    int num = 2043053040;
    ft_putnbr(num);
    ft_putchar('\n');
    ft_putnbr(-2147483648); // Doğru şekilde yazdırır
    ft_putchar('\n');
    return 0;
}
