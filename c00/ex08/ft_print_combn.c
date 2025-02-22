// #include <stdio.h>
// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void ft_print_combn(int n)
// {

//     int count1 = 0;
//     int count2 = 0;

//     while (n == 1)
//     {
//         while (count1 <= 9)
//         {

//             ft_putchar(count1 % 10 + '0');
//             ft_putchar(',');
//             ft_putchar(' ');
//             count1++;
//         }
//         count2++;
//         count1 = count2 + 1;
//         n--;
//     }

//     if (n == 2)
//     {
//         while (count2 < 9)
//         {
//             count1 = count2 + 1;
//             while (count1 <= 9)
//             {
//                 ft_putchar(count2 + '0');
//                 ft_putchar(count1 + '0');
//                 ft_putchar(',');
//                 ft_putchar(' ');
//                 count1++;
//             }
//             count2++;
//         }
//     }
// }

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    char num[10];
    int i = 0;

    if (n <= 0 || n >= 10)
        return;

    // İlk n rakamını doldur (0, 1, 2, ..., n-1)

    while (i < n)
    {
        num[i] = '0' + i;
        i++;
    }

    while (1)
    {
        // Kombinasyonu ekrana yazdır
        write(1, num, n);
        if (num[0] == '9' - n + 1) // Son kombinasyona ulaşıldı mı?
            break;
        write(1, ", ", 2);

        // Son basamaktan başlayarak artırma işlemi
        i = n - 1;
        while (i >= 0 && num[i] == '9' - (n - 1 - i))
            i--;
        num[i]++;       // Artırma işlemi
        while (++i < n) // Artan basamaktan sonraki tüm basamakları güncelle
            num[i] = num[i - 1] + 1;
    }
}

void main()
{
    ft_print_combn(4);
}
