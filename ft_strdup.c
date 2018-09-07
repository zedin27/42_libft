/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:54:46 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:02:09 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to a null-terminated byte string, which duplicates the
** size of a string pointer by str with dynamic memory and strnew.
*/

char	*ft_strdup(const char *str)
{
	char	*temp;

	if (!(temp = ft_strnew(ft_strlen(str))))
		return (NULL);
	return (ft_strcpy(temp, str));
}
