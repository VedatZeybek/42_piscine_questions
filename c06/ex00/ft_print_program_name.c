#include <stdio.h>
#include <unistd.h>

void ft_putstring(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char *argv[])
{
    // char *name = argv[0];

    // printf("Program Name: %s", name);

    int i;

    i = 0;
    while (*argv[0])
    {
        argv[0]++;
        i++;
    }

    if (argc > 0)
        write(1, argv[0] - i, i); // argv[0] - i ile başlangıç noktasına geri döndük

    write(1, "\n", 1);

    argv[0] = argv[0] - i;
    ft_putstring(argv[0]);
    return (0);
}