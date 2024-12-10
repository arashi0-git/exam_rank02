
#include <unistd.h>

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	j;
// 	int	str[256] = {};

// 	i = 0;
// 	if (ac == 3)
// 	{
// 		while (av[1][i])
// 		{
// 			j = 0;
// 			while (av[2][j])
// 			{
// 				if (av[1][i] == av[2][j] && str[(int)av[1][i]] == 0)
// 				{
// 					str[(int)av[1][i]] = 1;
// 					write(1, &av[1][i], 1);
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

//見つけた文字を格納する配列を作っておく、見つけたらフラグを立てて次は被らないようにする

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		char str[256] = {0};
// 		int i = 0;
// 		int j = 0;
// 		while (av[1][i])
// 		{
// 			j = 0;
// 			while (av[2][i])
// 			{
// 				if (av[1][i] == av[2][j] && str[(int)av[1][i]] == 0)
// 				{
// 					write(1, &av[1][i], 1);
// 					str[(int)av[1][i]] = 1;
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

int	main(int argc, char const *argv[])
{
	char str[256] = {0};
	int i = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			str[argv[2][i++]] = 1;
		}
		i = 0;
		while (argv[1][i])
		{
			if (str[argv[1][i]])
			{
				write(1, &argv[1][i], 1);
				str[argv[1][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}