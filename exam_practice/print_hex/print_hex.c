
#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
void	put_hex(int hex)
{
	char	str[] = "0123456789abcdef";

	if (hex >= 16)
		put_hex(hex / 16);
	hex = str[hex % 16];
	write(1, &hex, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		put_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}

//別関数を作ると再帰しやすいからよい
// 16のあまりの位置を出力
// atoiを使う