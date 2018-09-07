/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:43:26 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:07 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates malloc by a given size
*/

void	*ft_memalloc(size_t size)
{
	char *str;

	str = ((void*)malloc(size));
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
