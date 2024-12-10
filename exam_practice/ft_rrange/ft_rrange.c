
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
	range = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		if (start < end)
			range[i] = end--;
		else
			range[i] = end++;
		i++;
	}
	return (range);
}

#include <stdio.h>

int	main(void)
{
	int *range;
	int len;
	int i;

	range = ft_rrange(1, 5);
	len = 5;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");

	range = ft_rrange(5, 1);
	len = 5;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");

	range = ft_rrange(0, 0);
	len = 1;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");

	return (0);
}