#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	ptr = (char *)ft_memalloc(len + 1);
	if (s && ptr)
		ft_strcpy(ptr, (char *)s +  start, len);
	return (ptr);
}
