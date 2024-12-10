
// #include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
	int	size;
}		t_point;

void	fill(char **area, t_point size, int x, int y, char target)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if (area[y][x] != target || area[y][x] == 'F')
		return ;
	area[y][x] = 'F';
	fill(area, size, x - 1, y, target);
	fill(area, size, x + 1, y, target);
	fill(area, size, x, y - 1, target);
	fill(area, size, x, y + 1, target);
}

char	**flood_fill(char **area, t_point size, t_point begin)
{
	char	target;

	target = area[begin.y][begin.x];
	if (target == 'F')
		return (area);
	fill(area, size, begin.x, begin.y, target);
	return (area);
}
//再帰を使うx+-1,y+-1をしてtargetを決めてそれと該当すれば変更。違えばリターンする

char	**make_area(char **zone, t_point size)
{
	char	**new;

	new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

int	main(void)
{
	char	**area;
	t_point	begin;
	t_point	size;

	size.x = 8;
	size.y = 5;
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	begin.x = 5;
	begin.y = 3;
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

void	fill_char(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != target || tab[y][x] == 'F')
		return ;
	tab[y][x] == 'F';
	fill(tab, size, x - 1, y, target);
	fill(tab, size, x + 1, y, target);
	fill(tab, size, x, y - 1, target);
	fill(tab, size, x, y + 1, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	if (target == 'F')
		return (target);
	fill_char(tab, size, begin.x, begin.y, target);
	return (tab);
}