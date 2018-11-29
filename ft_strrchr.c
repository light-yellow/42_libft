/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:12:07 by jgoyette          #+#    #+#             */
/*   Updated: 2018/11/29 09:37:14 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*result_ptr;

	i = 0;
	result_ptr = NULL;
	if (c == '\0')
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			result_ptr = (char *)&s[i];
		i += 1;
	}
	return (result_ptr);
}
