#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = (char *)ft_memalloc(sizeof(char) * len);
	if (dup)
		ft_strncpy(dup, s, n);
	return (dup);
}
