
#include <stdlib.h>
#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n;
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	if (ac != 2)
	{
		write(1, "0\n", 1);
		return (0);
	}
	n = atoi(av[1]);
	if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
