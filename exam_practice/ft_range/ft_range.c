
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	i;
	int	*range;

	len = 0;
	i = 0;
	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			range[i] = start;
			start++;
		}
		else
		{
			range[i] = start;
			start--;
		}
		i++;
	}
	return (range);
}

#include <stdio.h>

int	main(void)
{
	int	*range;
	int	len;
	int	i;

	range = ft_range(1, 5);
	len = 5;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");
	range = ft_range(5, 1);
	len = 5;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");
	range = ft_range(0, 0);
	len = 1;
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	free(range);
	printf("\n");
	return (0);
}

// startとendの差を取得してmalloc
// start<endかそれ以外の場合わけで処理

int	*ft_range(int start, int end)
{
	int len = 0;
	int i = 0;
	if (start < end)
		len = end - start + 1;
	else
		len = start - end + 1;
	int *range = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
}