#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

#include <stdio.h>
int main()
{
	int *range;
	int size;

	size = ft_ultimate_range(&range, 3, 8);
	if (size != -1)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		free(range); // Belleği serbest bırak
	}
	else
	{
		printf("Memory Error!!!\n");
	}
}