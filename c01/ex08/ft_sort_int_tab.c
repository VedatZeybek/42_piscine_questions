#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;
    int j = 0;

    while (i < size)
    {
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1] && j < 4)
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        j = 0;
        i++;
    }
}

void main()
{
    int tab[5] = {5, 4, 3, 1, 2};
    int size = sizeof(tab) / sizeof(tab[0]);
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}