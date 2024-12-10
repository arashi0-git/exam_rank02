
#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	unsigned int	i;

	if (n == 1)
		printf("1");
	i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n = n / i;
			printf("%d", i);
			i = 2;
			if (n > 1)
				printf("*");
		}
		i++;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	else
		printf("\n");
	return (0);
}

//atoi変換、n>1nをiで割れたらiを出力して、n>1であれば*も出力