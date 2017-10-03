/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:36:45 by ztisnes           #+#    #+#             */
/*   Updated: 2017/09/27 17:17:23 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** jline 27 ptr = pointer, que hace una vaina.a,.s..s hshjkhhjkhjksahjkdsahjkd
** jhdshjshjsdahjk
** ssddsds
*/

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*uptr;

	uptr = (unsigned char *)ptr;
	while (num--)
		*uptr++ = (unsigned char) value;
	return (ptr);
}
/*
int main()
{
	char str[40] = "Joey for Obama Presidency 2020";
	printf("\nBefore memset(): %s\n", str);
	//Fill 8 characters starting from str[13] with '.'
	memset(str + 13, 'A', 8 * sizeof(char));

	printf("After memset():  %s", str);
	return (0);
}*/
