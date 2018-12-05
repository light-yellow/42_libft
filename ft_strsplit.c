#include "libft.h"
#include <stdio.h>

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 1;
	while (*s)
	{
		while ((char)*s == c)
			s += 1;
		if ((char)*s)
			count += 1;
		while ((char)*s && (char)*s != c)
			s += 1;
	}
	return (count);
}

int	main(void)
{
	char **tab = ft_strsplit("      ", ' ');
	for (int i = 0; i < 1; i += 1)
		printf("%s\n", tab[i]);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	tab_i;

	tab = NULL;
	tab_i = 0;
	if (s && c)
	{
		if (tab = (char **)ft_memalloc(sizeof(char *) * (ft_count(s, c))))
		{
			while (*s)
			{
				i = 0;
				while ((char)*s == c)
					s += 1;
				while (*(s + i) && (char)*(s + i) != c)
					i += 1;
				if (i > 0)
					tab[tab_i++] = ft_strndup(s, i);
				s += i;
			}
			tab[tab_i] = NULL;
		}
	}
	return (tab);
}
