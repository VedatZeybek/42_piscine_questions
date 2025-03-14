#include <unistd.h>

int is_blank(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

void print_reverse_words(char *str)
{
    int i;
    int end;
    int start;

    i = 0;
    while (str[i])
        i++;

    while (i > 0)
    {
        while (i >= 0 && is_blank(str[i])) // Boşlukları atla
            i--;
        end = i;
        while (i >= 0 && !is_blank(str[i]))
            i--;
        start = i + 1;

        if (start < end)
        {
            write(1, &str[start], end - start + 1);
            if (i >= 0)
                write(1, " ", 1);
        }
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    print_reverse_words(av[1]);
    write(1, "\n", 1);
    return (0);
}