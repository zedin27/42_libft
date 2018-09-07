/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:15:16 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:03:37 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Uses a string and checks the character byte.
** Return the total amount of characters occupied in a string.
*/

size_t		ft_wordlength(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
