#include "libft.h"

void	ft_strarr_del(char **tab)
{
	char **tmp_tab;

	tmp_tab = tab;
	while (*tmp_tab)
	{
		ft_strdel(tmp_tab);
		tmp_tab += 1;
	}
	free(tab);
}
