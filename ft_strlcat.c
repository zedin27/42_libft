/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 20:25:02 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/03 16:29:24 by ztisnes          ###   ########.fr       */
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

char	ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t dlen;
	size_t i;

	dlen = ft_strlen (dst);
	i = -1;
	if (!src || !*src)
		return dlen;
	while((++i < (size - dlen) - 1) && src[i])
		dst[i + dlen] = src[i];
	dst[i + dlen] = 0;
	return (i + dlen);
}
