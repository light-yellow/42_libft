#include "libft.h"

void	*ft_memdup(void const *src, size_t size)
{
	void	*dup;

	dup = ft_memalloc(size);
	if (dup)
		dup = ft_memcpy(dup, src, size);
	return (dup);
}
