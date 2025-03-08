#include <stdio.h>
#include <stdlib.h>

int pgcd(int nbr1, int nbr2)
{
    int i;

    i = nbr1;

    while (i > 0)
    {
        if ((nbr1 % i == 0) && (nbr2 % i == 0))
            return (i);
        i--;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int result;

    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    else
    {
        result = pgcd(atoi(argv[1]), atoi(argv[2]));
        printf("%d \n", result);
    }
    return (0);
}