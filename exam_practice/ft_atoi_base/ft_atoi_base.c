

int	check_str(char c, int base)
{
	if (c >= '0' && c <= '9' && (c - '0') < base)
		return (1);
	else if (c >= 'a' && c <= 'f' && (c = c - 'a' + 10) < base)
		return (1);
	else if (c >= 'A' && c <= 'F' && (c = c - 'A' + 10) < base)
		return (1);
	else
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && check_str(*str, str_base))
	{
		if (*str >= '0' && *str <= '9')
			result = result * str_base + (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			result = result * str_base + (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			result = result * str_base + (*str - 'A' + 10);
		str++;
	}
	return (result * sign);
}

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("101", 2));     // 出力: 5
	printf("%d\n", ft_atoi_base("7F", 16));     // 出力: 127
	printf("%d\n", ft_atoi_base("-1A", 16));    // 出力: -26
	printf("%d\n", ft_atoi_base("123", 8));     // 出力: 123
	printf("%d\n", ft_atoi_base("FF", 16));     // 出力: 255
	printf("%d\n", ft_atoi_base("0", 10));      // 出力: 0
	printf("%d\n", ft_atoi_base("  -123", 10)); // 出力: -123
	printf("%d\n", ft_atoi_base("1a2B", 16));   // 出力: 6707
	return (0);
}

//文字がベースの範囲内か確認が必要
//文字の数字変換も必要