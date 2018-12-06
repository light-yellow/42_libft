#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char *)ft_memalloc(sizeof(unsigned char) * len);
	if (!tmp)
		return (NULL);
	ft_memcpy((void *)tmp, src, len);
	ft_memcpy(dst, (const void *)tmp, len);
	free(tmp);
	return (dst);
}
