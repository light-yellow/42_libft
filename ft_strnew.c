#include "libft.h"

char	*ft_strnew(size_t size)
{
	if (size == (size_t)-1)
		return (NULL);
	else
		return ((char *)ft_memalloc(size + 1));
}
