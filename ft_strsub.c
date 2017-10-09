/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:34:37 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/07 21:36:13 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_len;

	new_len = ft_strnew(len);
	if (s)
	{
		if (new_len)
			return (ft_strncpy(new_len, s + start, len));
		return (NULL);
	}
	return (NULL);
}
