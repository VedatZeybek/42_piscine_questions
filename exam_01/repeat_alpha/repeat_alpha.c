#include <unistd.h>

int letter_count(char c)
{

    int i;

    i = 0;
    if (c >= 'a' && c <= 'z')
    {
        i = c - 96;
    }
    if (c >= 'A' && c <= 'Z')
    {
        i = c - 64;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int a = letter_count(argv[1][0]);
    char c = a + 48;
    write(1, &c, 1);
}