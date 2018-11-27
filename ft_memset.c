#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while ((size_t)i < n)
	{
		ptr[i] = (unsigned char)c;
		i += 1;
	}
	return (s);
}
