
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	count;
	int	len;

	i = 0;
	j = 0;
	count = 0;
	len = 0;
	if (ac == 3)
	{
		while (av[1][len])
			len++;
		while (av[1][i])
		{
			// j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					count++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (len == count)
		{
			i = 0;
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

// jは初期化しない