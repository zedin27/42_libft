/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:36:45 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:16 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets the size of a memory from in a descending order. Pointer increments to
** assign its position everytime number decrements. Returns ptr, which will
** be the filled memory area.
*/

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*uptr;

	uptr = (unsigned char*)ptr;
	while (num--)
		*uptr++ = (unsigned char)value;
	return (ptr);
}
