#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst_elem;

	lst_elem = (t_list *)ft_memalloc(sizeof(t_list));
	if (lst_elem)
	{
		if (content)
		{
			lst_elem->content = (t_list *)ft_memdup(content, content_size);
			if (lst_elem->content == NULL)
			{
				ft_memdel((void *)lst_elem);
				return (NULL);
			}
		}
		else
			lst_elem->content = NULL;
		lst_elem->content_size = (content) ? content_size : 0;
		lst_elem->next = NULL;
	}
	return (lst_elem);
}
