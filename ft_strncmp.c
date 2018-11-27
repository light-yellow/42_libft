#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && (size_t)i < n - (size_t)1)
		i += 1;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
