#include <unistd.h>

void print_hex(int nbr)
{
    char *str;

    str = "0123456789abcdef";
    if (nbr >= 16)
        print_hex(nbr / 16);
    write(1, &str[(nbr % 16)], 1);
}

int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = 10 * result + (str[i] - 48);
        i++;
    }
    return (result);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        print_hex(ft_atoi(argv[1]));
        write(1, "\n", 1);
    }
    return (0);
}