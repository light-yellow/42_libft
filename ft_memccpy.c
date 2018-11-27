#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while ((size_t)i < n)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_dest[i] == (unsigned int)c)
			return ((void *)&ptr_dest[i + 1]);
		i += 1;
	}
	return (NULL);
}
