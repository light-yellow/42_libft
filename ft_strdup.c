#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str) + (size_t)1;
	dup = (char *)malloc(sizeof(char) * len);
	if (dup)
		ft_strcpy(dup, str);
	return (dup);
}
