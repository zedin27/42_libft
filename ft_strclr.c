/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:44:04 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:02:03 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Clears a string s by iteration and replacing each character to null '\0'
*/

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
			s[i++] = '\0';
	}
}
