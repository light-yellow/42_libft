#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;

	result = NULL;
	if (s1 || s2)
	{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		result = ft_strnew(len);
		if (result)
		{
			ft_strcpy(result, s1);
			ft_strcat(result, s2);
		}
	}
	return (result);
}
