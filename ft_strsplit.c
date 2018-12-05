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
	printf("%d\n", ft_count("split  ||this|for|me|||||!|", '|'));
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
		tab = (char **)ft_memalloc(sizeof(char *) * (ft_count(s, c)));
		if (tab)
		{
			while (*s)
			{
				i = 0;
				while ((char)*s == c)
					s += 1;
				while (*s && (char)*s != c)
					i += 1;
				if (i > 0)
					tab[tab_i++] = ft_strndup(s, i);
			}
			tab[tab_i] = NULL;
		}
	}
	return (tab);
}
