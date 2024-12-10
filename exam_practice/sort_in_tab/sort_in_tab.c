

void	sort_in_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i] = temp;
		}
		else
			i++;
	}
}