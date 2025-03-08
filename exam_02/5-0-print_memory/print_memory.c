#include <unistd.h>

void print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    write(1, &hex[c / 16], 1); // İlk basamak
    write(1, &hex[c % 16], 1); // İkinci basamak
}

void print_memory(const void *addr, size_t size)
{
    size_t i;
    size_t j;
    unsigned char *mem = (unsigned char *)addr;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (i + j < size)
        {
            if (i + j < size)
                print_hex(mem[i + j]);
            else
                write(1, " ", 1);
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        j = 0;
        while (j < 16 && i + j < size)
        {
            if (mem[i + j] >= 32 && mem[i + j] <= 126)
                write(1, &mem[i + j], 1);
            else
                write(1, ".", 1);
            j++;
        }
        write(1, "\n", 1);
    }
}
