#include <unistd.h>

int control_char(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (control_char(argv[1], argv[1][i], i))
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            if (control_char(argv[2], argv[2][j], j) && control_char(argv[1], argv[2][j], i))
                write(1, &argv[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}