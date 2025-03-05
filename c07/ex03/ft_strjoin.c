#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;
	while (str[i])
	{
		i++;
	}
	return i;
}

char *ft_strcat(char *dest, char *str)
{
	int i;
	int j;
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (str[j])
	{
		dest[i + j] = str[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **str, char *sep)
{
	int i;
	int j;
	int total_len;
	char *result;

	if (!*str)
		return NULL;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(str[i]);
		i++;
	}
	result = (char *)malloc(total_len + size + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, str[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
#include <stdio.h>

int main(void)
{
	// Test stringler ve separator
	char *strs[] = {"Hello", "world", "from", "C"};
	char *sep = ", ";

	// ft_strjoin fonksiyonunu çağırıyoruz
	char *result = ft_strjoin(4, strs, sep);

	// Sonucu yazdırıyoruz
	if (result)
	{
		printf("result: %s\n", result);
		free(result); // Belleği serbest bırakıyoruz
	}
	else
	{
		printf("Error.\n");
	}

	return 0;
}