
int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == '_')
			{
				i++;
				av[1][i] = av[1][i] - 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//mallocとか使わない、'_'を見つけたらiをインクリメントして
//大文字変換
//camel_to_snakeは大文字が見つかったら小文字化して'_'を出力し、
//if文の外でwrite