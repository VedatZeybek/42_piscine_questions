#include <unistd.h>

int is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = 1 + i;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (str[i] - 48) + result * 10;
			i++;
		}
	}
	return (result * sign);
}

int ft_atoi_base(char *str, char *base)
{
	int num;
	int base_len;
	int result;
	int power;

	num = ft_atoi(str);
	result = 0;
	power = 1;
	base_len = 0;

	if (!is_valid_base(base))
		return 0;
	while (base[base_len])
	{
		base_len++;
	}
	while (num > 0)
	{
		result += (num % base_len) * power;
		num /= base_len;
		power *= 10;
	}
	return (result);
}
#include <stdio.h>

int main()
{
	// Test örnekleri
	char *str1 = "45";				  // 2 tabanında 1010 = 10 (onluk)
	char *str2 = "998";				  // 16 tabanında 1A = 26 (onluk)
	char *str3 = "2565";			  // 10 tabanında 255 = 255 (onluk)
	char *base1 = "01";				  // İkilik tabanı
	char *base2 = "0123456789ABCDEF"; // Onaltılık tabanı
	char *base3 = "0123456789";		  // Onluk tabanı

	printf("Base 2: %s -> %d\n", str1, ft_atoi_base(str1, base1));
	printf("Base 16: %s -> %d\n", str2, ft_atoi_base(str2, base2));
	printf("Base 10: %s -> %d\n", str3, ft_atoi_base(str3, base3));

	return 0;
}