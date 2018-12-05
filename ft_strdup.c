#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dup = (char *)ft_memalloc(sizeof(char) * len);
	if (dup)
		ft_strcpy(dup, s1);
	return (dup);
}
