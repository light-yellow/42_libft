#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned int count;

	count = 0;
	while (str[count])
		count += 1;
	return ((size_t)count);
}
