#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*allocated;

	allocated = malloc(size);
	if (allocated)
		ft_bzero(allocated, size);
	return (allocated);
}
