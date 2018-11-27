#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int 		i;
	unsigned char		*ptr_dest;
	unsigned char		*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while ((size_t)i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i += 1;
	}
	return (dest);
}
