#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
	char *cpy;
	int i;
	int j;
	while (str[i])
		i++;

	cpy = (char *)malloc(i + 1);
	if (!cpy)
		return NULL;
	j = 0;
	while (j <= i) // j = i yapıyoruz çünkü '\0' null da eklememiz lazım
	{
		cpy[j] = str[j];
		j++;
	}
	return cpy; // Belleğin başını döndür
}

// char *ft_strdup(char *str)
// {
// 	char *cpy;
// 	char *start;
// 	int i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	cpy = (char *)malloc(i + 1);
// 	if (!cpy)
// 		return NULL;
// 	start = cpy;
// 	while (*str)
// 	{
// 		*cpy = *str; //str nin adresini değiştirmek hatalı sonuç verebilir. sen str nin de sonuna gitmiş oluyorsun.
// 		str++;
// 		cpy++;
// 	}
// 	*cpy = '\0';
// 	return start;
// }

#include <stdio.h>

int main()
{
	char *s = "Hello, World!";
	char *dup = ft_strdup(s);

	if (dup)
	{
		printf("Orijinal: %s\n", s);
		printf("Kopya   : %s\n", dup);
		free(dup); // Belleği serbest bırak
	}

	return 0;
}