#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;

	dup = (char *)ft_memalloc(sizeof(char) * (size_t)(n + 1));
	if (dup)
		dup = ft_strncpy(dup, s, n);
	return (dup);
}
