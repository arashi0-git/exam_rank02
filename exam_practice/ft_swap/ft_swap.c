

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>

int	main(void)
{
	int a = 56;
	int b = 73;
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
}