#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int	len;

	len = ft_strlen(str) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (dup)
		ft_strcpy(dup, str);
	return (dup);
}
