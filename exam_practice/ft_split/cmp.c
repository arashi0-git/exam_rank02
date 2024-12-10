
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		w_count;
	char	**result;

	i = 0;
	w_count = 0;
	if (!str || *str == '\0')
		return ((char **)malloc(sizeof(char *)));
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			w_count++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	result = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * (i - j + 1));
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
	return (result);
}

int	main(void)
{
	char **result;
	int i;

	result = ft_split(" hello world good ");
	i = 0;
	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}