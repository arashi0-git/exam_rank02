
#include <unistd.h>

int	main(int argc, char **av)
{
	if (argc == 2)
	{
		int j;
		int i;

		j = 0;
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == ' ' && av[1][i + 1] >= 33 && av[1][i + 1] <= 126)
				j = i + 1;
			i++;
		}
		while (av[1][j] >= 33 && av[1][j] <= 127)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}

	write(1, "\n", 1);
	return (0);
}

//iをインクリメントしていくけどi+1が表示可能文字だったらjにi+1（次からが文字だから）を更新
//jをが表示可能文字内で表示