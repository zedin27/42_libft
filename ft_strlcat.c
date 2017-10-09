/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 20:25:02 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/08 21:46:59 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ~Possible way to short the code. I need more time for this one.~
** strlcat function guarantees to NUL-terminate the destnation string for a 0
** The size of the given string is s.
** strlcpy != strlcat because one copies and other one concatenates
** Append is size - 1
** To avoid truncation, use ft_memcpy and set the new destination to NULL
** Return value is the destination length and source length (which appends)
*/

size_t		ft_strlcat (char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dst[len] && len < s)
		len++;
	i = len;
	while (src[len - i] && len + 1 < s)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < s)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
