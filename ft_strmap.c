/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:24:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/08 19:59:28 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char *str;
	int i;

	str = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	i = 0;
	if(!s || !str)
		return (NULL);
	if (str)
	{
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
