/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 05:42:48 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/12 14:46:02 by lprior           ###   ########.fr       */
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
