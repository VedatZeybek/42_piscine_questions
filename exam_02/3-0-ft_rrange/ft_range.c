#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int diff;
    int *range;
    int i;

    diff = end - start;
    if (diff < 0)
        diff *= -1;
    range = (int *)malloc(sizeof(int) * (diff + 1));
    if (!range)
        return (NULL);
    i = 0;
    while (i <= diff)
    {
        if (end > start)
            range[i] = end - i;
        else
            range[i] = end + i;
        i++;
    }
    return (range);
}
#include <stdio.h>
int main(void)
{
    int start = -1;
    int end = 2;
    int *arr = ft_rrange(start, end);

    if (!arr)
        return (1);

    int size = (end >= start) ? (end - start + 1) : (start - end + 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Belleği temizle
    return (0);
}