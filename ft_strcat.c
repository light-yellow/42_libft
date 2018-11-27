#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int i;
	unsigned int j;

	i = (unsigned int)ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (dest);
}
