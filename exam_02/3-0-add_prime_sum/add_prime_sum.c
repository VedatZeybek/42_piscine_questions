#include <unistd.h>

int is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i;
    int result;

    result = 0;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = 10 * result + (str[i] - 48);
        i++;
    }
    return (result);
}

void ft_putnbr(int nbr)
{
    char a;
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    a = (nbr % 10) + '0';
    write(1, &a, 1);
}

void add_prime_sum(int nbr)
{
    int i;
    int result;

    i = 1;
    result = 0;
    while (i <= nbr)
    {
        if (is_prime(i))
        {
            result += i;
        }
        i++;
    }
    ft_putnbr(result);
    write(1, "\n", 1); // Add newline after the result
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        if (num <= 0)
        {
            write(1, "0\n", 2);
            return 0;
        }
        add_prime_sum(num);
    }
    else
        write(1, "0\n", 2); // Yanlış durumda 0 ve newline yazdır
    return (0);
}