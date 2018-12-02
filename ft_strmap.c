#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*ptr;
	unsigned int	i;
	unsigned int	len;

	ptr = NULL;
	i = 0;
	if (s && f)
	{
		len = sizeof(char) * (ft_strlen((char *)s) + 1);
		ptr = (char *)ft_memalloc((size_t)len);
		if (ptr)
		{
			while (*s)
			{
				ptr[i] = f(s[i]);
				i += 1;
			}
		}

	}
	return (ptr);
}
