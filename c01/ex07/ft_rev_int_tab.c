#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{

    int i = 0;
    int j = size - 1;
    int temp;
    while (i < j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

void main()
{

    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]); // dizinin uzunluğunu hesaplayan formül toplam / bir elemanın byte sayısı
    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}

// #include <stdio.h>

// void ft_rev_int_tab(int *tab, int size)
// {
//     int temp;
//     int i = 0;
//     int j = size - 1; // Son elemanın indexi

//     while (i < j)
//     {
//         // Swap (yer değiştir)
//         temp = tab[i];
//         tab[i] = tab[j];
//         tab[j] = temp;

//         i++;
//         j--;
//     }
// }

// int main()
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     int size = sizeof(tab) / sizeof(tab[0]); // Dizinin eleman sayısını hesapla

//     printf("Önce: ");
//     for (int i = 0; i < size; i++)
//         printf("%d ", tab[i]);

//     ft_rev_int_tab(tab, size);

//     printf("\nSonra: ");
//     for (int i = 0; i < size; i++)
//         printf("%d ", tab[i]);

//     return 0;
// }