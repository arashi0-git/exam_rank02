

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	n;
	int				result;

	n = 0;
	result = is_power_of_2(n);
	printf("%d", result);
	printf("\n");
	return (0);
}

// iは1から増加させるインクリメントはi*=2