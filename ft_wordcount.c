/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 18:08:54 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:31:39 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

size_t	ft_wordcount(char const *s, char c)
{
	int i;
	int words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\0')
			words++;
		while (s[i] == c && s[i + 1])
			i++;
		i++;
	}
	return (words);
}
