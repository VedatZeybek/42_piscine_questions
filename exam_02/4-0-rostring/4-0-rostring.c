#include <unistd.h>

int is_blank(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}
void print_rostring(char *str)
{
    int i = 0;
    int start;
    int end;
    int is_printed_before = 0;

    while (str[i] && is_blank(str[i]))
        i++;
    start = i;
    while (str[i] && !is_blank(str[i]))
        i++;
    end = i;
    while (str[i])
    {
        while (str[i] && is_blank(str[i]))
            i++;
        while (str[i] && !is_blank(str[i]))
        {
            write(1, &str[i], 1);
            is_printed_before = 1;
            i++;
        }
        if (str[i])
            write(1, " ", 1);
    }
    if (is_printed_before)
        write(1, " ", 1);
    if (end > start)
    {
        write(1, &str[start], end - start);
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    print_rostring(av[1]);
}