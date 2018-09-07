/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 01:09:41 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:02:34 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** String concatenation with n bytes from string s1 (look at ft_strcat)
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[dest_len + i] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}
