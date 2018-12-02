#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char            *ptr;
        unsigned int    i;
        unsigned int    len;

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
				ptr[i] = f(i, s[i]);
                        	i += 1;
			}
                }

        }
        return (ptr);
}

