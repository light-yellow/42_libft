#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && (size_t)i < n)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && (size_t)(i + j) < n)
			j += 1;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i += 1;
	}
	return ((char *)0);
}
