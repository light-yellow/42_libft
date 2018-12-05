#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	ptr = (char *)ft_memalloc(sizeof(char) * (size_t)(len + 1));
	if (s && ptr)
		ft_strncpy(ptr, s +  start, len);
	return (ptr);
}
