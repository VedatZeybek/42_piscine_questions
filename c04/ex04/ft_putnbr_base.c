#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i >= 2)
		return (1);
	return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (!is_valid_base(base))
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
#include <stdio.h>
int main()
{
	printf("Decimal (10 taban): ");
	ft_putnbr_base(42, "0123456789"); // 42
	printf("\n");

	printf("Binary (2 taban): ");
	ft_putnbr_base(42, "01"); // 101010
	printf("\n");

	printf("Octal (8 taban): ");
	ft_putnbr_base(42, "01234567"); // 52
	printf("\n");

	printf("Hexadecimal (16 taban): ");
	ft_putnbr_base(42, "0123456789ABCDEF"); // 2A
	printf("\n");

	printf("Negatif sayi (10 taban): ");
	ft_putnbr_base(-42, "0123456789"); // -42
	printf("\n");

	printf("Negatif sayi (16 tabani): ");
	ft_putnbr_base(-42, "0123456789ABCDEF"); // -2A
	printf("\n");

	printf("Geçersiz taban (Tek karakterli): ");
	ft_putnbr_base(42, "0"); // Hiçbir şey yazmamalı
	printf("\n");

	printf("Geçersiz taban (Tekrar eden karakterler): ");
	ft_putnbr_base(42, "1123456789"); // Hiçbir şey yazmamalı
	printf("\n");

	return 0;
}