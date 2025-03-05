// #include <unistd.h>

// int ft_atoi(const char *str)
// {
//     while (*str)
//     {
//         if (*str == ' ')
//             str++;
//         else if ((*str >= 65 && *str <= 90) || *str  )
//     }

// }

#include <stdio.h>

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return;

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if ((i == 0 || i == y - 1) && (j == 0)) // Sol üst ve sol alt
                printf("A");
            else if ((i == 0 || i == y - 1) && (j == x - 1)) // Sağ üst ve sağ alt
                printf("C");
            else if (i == 0 || i == y - 1) // Üst ve alt kenar
                printf("B");
            else if (j == 0 || j == x - 1) // Sol ve sağ kenar
                printf("B");
            else // Boşluk
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    rush(5, 3);
    printf("\n");
    rush(5, 1);
    printf("\n");
    rush(1, 1);
    printf("\n");
    rush(1, 5);
    printf("\n");
    rush(4, 4);
    return 0;
}