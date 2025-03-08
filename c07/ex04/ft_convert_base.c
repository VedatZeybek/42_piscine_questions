#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return;
}

int ft_is_valid_base(char *base)
{
	int i;
	int j;

	i = ft_strlen(base);
	if (i < 2)
		return (0);
	i = 0;
	while (i < base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = 0;
		while (j < base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (0);
}

int ft_atoi(char *str, char *base)
{
	int i;
	int result;
	int sign;

	if (ft_is_valid_base(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while ((str[i] > 9 && str[i] < 13) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] > '0' && str[i] < '9')
		{
			result = (str[i] + '0') + result * 10;
			i++;
		}
		return (sign * result);
	}
}

int ft_itoa(int num, char *base)
{
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}