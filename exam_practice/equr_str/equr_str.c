
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] == ' ')
		i++;
	while (av[1][i])
	{
		if (av[1][i] == ' ')
			space = 1;
		if (av[1][i] != ' ')
		{
			if (space)
				write(1, "   ", 3);
			space = 0;
			ft_putchar(av[1][i]);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

//スペースを見つけたらフラグを建てる、次のifでスペースでなければ
//フラグを確認、フラグあればスペース追加しフラグを戻す、なればそのまま文字を出力
