#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{

    int i = 0;

    while (str[i] != '\0') // Dizinin sonuna (null karaktere) gelene kadar döngü devam eder
    {
        ft_putchar(str[i]);
        i++;
    }
}

// void main()
// {
//     // char *str = "ldskvm";
//     // printf(str);
//     ft_putstr("Hello Sekai!");
// }

void main()
{
    char string[15];
    char *first_pointer;

    string[0] = 'H';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = ' ';
    string[6] = 'W';
    string[7] = 'o';
    string[8] = 'r';
    string[9] = 'l';
    string[10] = 'd';
    string[11] = ' ';
    string[12] = '4';
    string[13] = '2';
    string[14] = '\0';
    // first_pointer = &string[0];
    // printf("%s\n", string);
    // ft_putstr(first_pointer);
    first_pointer = &string[0];
    ft_putstr(first_pointer);
}