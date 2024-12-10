
#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	while (n > 0 && *s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int wd_count = 0;
	int i = 0;
	int j;
	int k = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
			wd_count++;
		while (str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
			i++;
	}
	i = 0;
	char **split = (char **)malloc(sizeof(char *) * wd_count + 1);
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		j = i;
		while (str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
			i++;
		if (i > j)
		{
			split[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(split[k], &str[i - j], i - j);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}