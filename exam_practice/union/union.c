
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	check[256] = {0};

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check[(int)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				check[(int)av[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (check[(int)av[2][i]] == 0)
			{
				write(1, &av[2][i], 1);
				check[(int)av[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// interと同じようにcheck[256]={0}みたいなのをつくる
// av[1][i]とav[2][i]それぞれでcheckと出力をする
