/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:19:16 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/08 18:10:45 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	step1(char *stok)
// {
// 	int i;
// 	int flag
//
// 	i = 0;
// 	flag = 0;
// 	while (*stok != '\0')
// 	{
// 		if (flag == 0 && *stok != delim)
// 	}
//
// }

char	*ft_strtok(char *str, const char delim)
{
	static char		*stok;
	char			*ptr;
	int				flag;

	stok = NULL;
	flag = 0;
	ptr = NULL;
	if (str != NULL)
		stok = ft_strdup(str);
	while (*stok != '\0')
	{
		if (flag == 0 && *stok != delim)
		{
			flag = 1;
			ptr = stok;
		}
		else if (flag == 1 && *stok == delim)
		{
			*stok = '\0';
			stok++;
			break;
		}
		stok++;
	}
	return (ptr);
}
