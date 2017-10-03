/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 05:42:48 by ztisnes           #+#    #+#             */
/*   Updated: 2017/09/28 07:39:30 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	ret;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char *)str1;
	us2 = (unsigned char *)str2;
	ret = (i == n ? 0 : ((unsigned char *)str1 - (unsigned char *)str2));
	while ((i < n) && us1 == us2)
		i++;
	return (ret);
}
