/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 20:25:02 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/05 19:36:17 by ztisnes          ###   ########.fr       */
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

/*int main()
{
	char ft_strlcat_src[7] = "banana";
	char ft_strlcat_dst[12] = "good";
	printf("ft_strlcat => 'banana', 'good', 12 expected: 10  => %hhd\n", ft_strlcat(ft_strlcat_dst, ft_strlcat_src, 12));
	char ft_strlcat_src2[6] = "whatt";
	char ft_strlcat_dst2[15] ="he said.";
	printf("ft_strlcat => 'he said.', 'whatt', 15 expected: 13  => %hhd\n",ft_strlcat(ft_strlcat_dst2, ft_strlcat_src2, 15));
}
*/
/*char	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t s_length;
	size_t d_length;
	size_t remaining_size;
	size_t copy_length;

	remaining_size = s;
	s_length = ft_strlen(src);
	while (*(dst)++ && remaining_size > 0)
		remaining_size--;
	d_length = (s - remaining_size);
	if (d_length < remaining_size)
	{
		copy_length = (remaining_size - 1);
		if (s_length < copy_length)
			copy_length = s_length;
		memcpy(dst, src, copy_length);
		dst[copy_length] = '\0';
	}
	return (d_length + s_length);
}*/
