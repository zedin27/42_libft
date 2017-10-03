/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 20:01:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/02 16:05:13 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t i;

	i = -1;
	if (dest == '\0' || src == '\0')
		return (0);
	while (++i < num && *src != '\0')
		dest[i] = src[i];
	while (++i < num)
		dest[i] = '\0';
	return (dest);
}
/*int		 main()
{
   char src[40];
   char dest[12];

   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);

   return(0);
}*/
