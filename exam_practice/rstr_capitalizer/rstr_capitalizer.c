

#include <unistd.h>

void	capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		// write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] < 33 || str[i
				+ 1] == '\0'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 1)
	{
		i = 0;
		while (i < ac - 1)
		{
			capitalize(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

// rstrはi+1の空白,strはi-1の空白のあとに大文字変換