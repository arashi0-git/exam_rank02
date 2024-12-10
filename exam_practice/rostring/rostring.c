
void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
}

int	main(int ac, char **av)
{
	char	*str;
	char	first_wd_start;
	char	*first_wd_end;

	if (ac > 1)
	{
		str = av[1];
		while (*str == ' ' || *str == '\t')
			str++;
		first_wd_start = str;
		while (*str && *str != ' ' && *str != '\t')
			str++;
		first_wd_end = str;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ' || *str == '\t')
						str++;
					if (*str)
						write(1, " ", 1);
				}
				else
				{
					write(1, str, 1);
					str++;
				}
			}
			write(1, " ", 1);
		}
		write_word(first_wd_start, first_wd_end);
	}
	write(1, "\n", 1);
	return (0);
}

//はじめの単語のstartとendを取得文字列がまだあれば、スペースがあればインクリメントして
//スペースの追加、なければ出力、最後に最初の単語を出力