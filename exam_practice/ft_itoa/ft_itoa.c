
#include <stdlib.h>

int	num_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*nstr;

	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	len = num_len(nbr) + sign;
	nstr = (char *)malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (NULL);
	nstr[len] = '\0';
	while (len > sign)
	{
		nstr[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (sign)
		nstr[0] = '-';
	return (nstr);
}

//数値の長さは0だったら1負だったら正に変換してからcount
//フラグを負だったら立ててlen+1負だったら正に変えてから処理
//len>signまでwhileし、nbr%10ものをcharに変換
//signだったらnstr[0]に"-"をつける

#include <stdio.h>

int	main(void)
{
	int num = -345678;
	char *str = ft_itoa(num);
	printf("%s", str);
	return (0);
}