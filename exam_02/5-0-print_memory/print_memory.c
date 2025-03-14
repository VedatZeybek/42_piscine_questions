#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putascii(char c)
{
    if (c >= 32 && c <= 127)
        ft_putchar(c);
    else
        ft_putchar('.');
}

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void print_line(unsigned char *ptr, size_t start, size_t size)
{
    size_t j;
    j = start;
    while (j < size && j < (start + 16))
    {
        print_hex(ptr[j]);
        if ((j + 1) % 2 == 0)
            write(1, " ", 1);
        j++;
        if (!ptr)
            break;
    }
    while (j < (start + 16))
    {
        ft_putchar(' ');
        ft_putchar(' ');
        if (j % 2 != 0)
            ft_putchar(' ');
        j++;
    }
    j = start;
    while (j < (start + 16) && j < size)
    {
        ft_putascii(ptr[j]);
        j++;
    }
}

void print_memory(const void *addr, size_t size)
{
    unsigned char *ptr = (unsigned char *)addr;
    size_t i;

    i = 0;
    while (i < size)
    {
        print_line(ptr, i, size);
        write(1, "\n", 1);
        i += 16;
    }
}

int main()
{
    char tab[10] = {'0', 'f', '0', '2',
                    '1', 'b', '1', '4', '9', 'a'};
    size_t size = sizeof(tab);
    print_memory(tab, size);
}