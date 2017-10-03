/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 01:09:41 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/02 20:26:09 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t dest_len = ft_strlen(s1);
	size_t i;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[dest_len + i] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}

/*int main( )
{
	char src[50], dest[50];

    ft_strcpy(src,  "This is source");
    ft_strcpy(dest, "This is destination");

    ft_strncat(dest, src, 15);

    printf("Final destination string : |%s|", dest);

    return(0);
}*/
