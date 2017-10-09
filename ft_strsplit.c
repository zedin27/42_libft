/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:08:39 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/08 18:35:30 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**w;

	i = 0;
	k = 0;
	w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));

	if (!s || !w)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		w[i] = (char *)malloc(sizeof(char) * (ft_wordlength(&s[k], c) + 1));
		if (!(w[i]))
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
