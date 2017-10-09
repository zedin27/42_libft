/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 11:50:49 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/06 03:54:42 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *usrc;
	unsigned char *udest;

	i = 0;
	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	if (usrc < udest)
		while (n-- > 0)
			udest[n] = usrc[n];
	else
		while (i < n)
		{
			*udest = *usrc;
			udest++;
			usrc++;
			i++;
		}
	return (udest);
}
