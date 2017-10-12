/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:54:46 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/11 16:05:41 by lprior           ###   ########.fr       */
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
