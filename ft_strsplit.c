/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:08:39 by ztisnes           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/10 02:06:38 by ztisnes          ###   ########.fr       */
=======
/*   Updated: 2017/10/09 18:24:11 by ztisnes          ###   ########.fr       */
>>>>>>> 6f299f9c19d7bfc51bea58d499db216bc1823fab
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**w;

	i = 0;
	k = 0;
	if (!s || !(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
<<<<<<< HEAD
		if (!(w[i] = (char *)malloc(sizeof(char)
			* (ft_wordlength(&s[k], c) + 1))))
=======
		w[i] = ft_strnew(ft_wordlength(&s[k], c) + 1);
		if (!(w[i]))
>>>>>>> 6f299f9c19d7bfc51bea58d499db216bc1823fab
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			w[i][j++] = s[k++];
		w[i][j] = '\0';
		i++;
	}
	w[i] = NULL;
	return (w);
}
