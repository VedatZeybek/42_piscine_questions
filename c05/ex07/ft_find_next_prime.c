#include <unistd.h>
#include <stdio.h>

int ft_is_nbr_prime(int nb)
{
	if (nb < 2)
		return 0;
	if (nb == 3 || nb == 2)
		return 1;
	if (nb % 2 == 0)
		return 0;
	int i;
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return 2;
	while (!ft_is_nbr_prime(nb))
	{
		nb++;
	}
	return nb;
}

int main()
{
	int a = ft_find_next_prime(7);
	printf("%d\n", a);
	return 0;
}