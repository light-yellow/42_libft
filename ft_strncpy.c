#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (src[i] && (size_t)i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	while ((size_t)i < n)
	{
		dest[i] = '\0';
		i += 1;
	}
	return (dest);
}
