#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
	int range;
	int *arr;
	int i;
	// Eğer start >= end, boş bir dizi döndürüyoruz
	if (min >= max)
		return NULL;

	i = 0;
	range = max - min;
	arr = (int *)malloc(range * sizeof(int *)); // (int *) koymazsan c++ gibi derleyicilerde hata verir ama c de oto dönüşüm yapıyor.
	if (!arr)
		return NULL;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return arr;
}
#include <stdio.h>
int main()
{
	int start = 3;
	int end = 8;
	int *range;

	range = ft_range(start, end);

	if (range)
	{
		// Dizi elemanlarını tek tek yazdırmak için
		printf("Range: %d %d %d %d %d\n", range[0], range[1], range[2], range[3], range[4]);

		free(range);
	}
	else
	{
		printf("Invalid range or memory allocation error.\n");
	}

	return 0;
}