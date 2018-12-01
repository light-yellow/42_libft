#include "libft.h"

void	ft_strclr(char *s)
{
	if (s && *s)
		ft_bzero(s, ft_strlen(s));
}
