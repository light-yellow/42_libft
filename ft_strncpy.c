#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	ft_bzero((void *)dst, len);
	len = (len > ft_strlen(src)) ? ft_strlen(src) : len;
	dst = (char *)ft_memcpy((void *)dst, (const void *)src, len);
	return (dst);
}
