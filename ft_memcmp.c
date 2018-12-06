#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	if (s1 || s2)
	{
		while (i < n)
		{
			if (ptr_s1[i] != ptr_s2[i])
				return ((int)(ptr_s1[i] - ptr_s2[i]));
			i += 1;
		}
	}
	return (0);
}
