/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:18:16 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/06 01:41:47 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n)
	{
		while (i < n && ((unsigned char *)src)[i] != '\0')
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			if (c == ((unsigned char *)src)[i])
			{
				return (&((unsigned char *)dst)[i + 1]);
			}
			i++;
		}
	}
	return (NULL);
}

/*
char string1[60] = "Taj Mahal is a historic monument in India.";

int main( void ) {

   char buffer[61];
   char *pdest;
   printf( "Function: _memccpy 42 characters or to character 'c'\n" );
   printf( "Source: %s\n", string1 );
   pdest = ft_memccpy( buffer, string1, 'c', 42);
   printf( "Result: %s\n", buffer );
   printf( "Length: %zd characters\n", ft_strlen( buffer ) );
}
*/
