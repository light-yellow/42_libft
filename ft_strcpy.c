#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	len;

	len = ft_strlen(src) + 1;
	dst = (char *)ft_memcpy((void *)dst, (const void *)src, len);
	return (dst);
}
