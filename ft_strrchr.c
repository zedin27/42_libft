/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 04:30:14 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:03:20 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate character in string. Function returns a pointer to the LAST
** occurrence.
** Poker game (Last)
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == c)
			return ((char *)&s[i - (j - 1)]);
	return (NULL);
}
