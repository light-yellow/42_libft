#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
	else
		ft_putstr_fd("(null)", fd);
}
