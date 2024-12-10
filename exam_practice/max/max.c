

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 3, 7, 2, 5};
	int	max_num;

	max_num = max(tab, 5);
	printf("%d\n", max_num);
	return (0);
}

//初期設定で配列のはじめを設定し、配列と現時点のmaxを比較