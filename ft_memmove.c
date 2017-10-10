/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 11:50:49 by ztisnes           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/09 19:18:14 by ztisnes          ###   ########.fr       */
=======
/*   Updated: 2017/10/09 18:51:30 by ztisnes          ###   ########.fr       */
>>>>>>> 6f299f9c19d7bfc51bea58d499db216bc1823fab
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
<<<<<<< HEAD
	void	*temp_s1;
=======
	void    *temp_s1;
>>>>>>> 6f299f9c19d7bfc51bea58d499db216bc1823fab

	temp_s1 = s1;
	if (!n)
		return (s1);
	if (s1 <= s2 || (unsigned char *)s1 > ((unsigned char *)s2 + n))
		return (ft_memcpy(s1, s2, n));
	else
	{
		s1 = (unsigned char *)s1 + n - 1;
		s2 = (unsigned char *)s2 + n - 1;
		while (n--)
			*(unsigned char *)s1-- = *(unsigned char *)s2--;
	}
	return (temp_s1);
}
