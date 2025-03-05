
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// // ft_strcmp fonksiyonu .c dosyasına eklenir
// int ft_strcmp(char *s1, char *s2)
// {
//     while (*s1 && *s1 == *s2) // Dizilerdeki karakterler eşit olduğu sürece devam et
//     {
//         s1++;
//         s2++;
//     }
//     return ((unsigned char)*s1 - (unsigned char)*s2); // Farkı döndür
// }

void main()
{

    char c = 'x';
    ft_putchar(c);
}
