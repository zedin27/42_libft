/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 05:42:48 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:10 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two string memories using ternary statements
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				ret;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	while ((i < n) && *us1 == *us2)
	{
		us1++;
		us2++;
		i++;
	}
	ret = (i == n ? 0 : *us1 - *us2);
	return (ret);
}
