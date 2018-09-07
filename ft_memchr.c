/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 19:42:15 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:09 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ustr;

	i = 0;
	ustr = (unsigned char*)str;
	while (i < n)
	{
		if (ustr[i] != (unsigned char)c)
			i++;
		else
			return (&ustr[i]);
	}
	return (NULL);
}
