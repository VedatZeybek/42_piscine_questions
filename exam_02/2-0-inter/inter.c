#include <unistd.h>

int control_char(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (control_char(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1); // Sonuna \n ekle
	return (0);
}

// int main(int argc, char **argv)
// {
// 	int i;
// 	int j;
// 	int used[256] = {0};

// 	if (argc == 3)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			j = 0;
// 			while (argv[2][j])
// 			{
// 				if (argv[1][i] == argv[2][j] && !used[(unsigned char)argv[1][i]])
// 				{
// 					used[(unsigned char)argv[1][i]] = 1;
// 					write(1, &argv[1][i], 1);
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }