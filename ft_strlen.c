#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		count += 1;
	return (count);
}
