

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	g;

	if (a > b)
		g = a;
	else
		g = b;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if ((g % a == 0) && (g % b == 0))
			return (g);
		g++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	g;

	a = 5;
	b = 6;
	g = lcm(a, b);
	printf("%d", g);
	return (0);
}
