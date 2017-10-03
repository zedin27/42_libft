/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 19:42:15 by ztisnes           #+#    #+#             */
/*   Updated: 2017/09/25 20:06:12 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ustr;

	i = 0;
	ustr = (unsigned char*)str;
	while (*ustr < n)
	{
		if (*ustr != c)
			ustr++;
		else
			return (ustr);
	}
	return (0);
}
