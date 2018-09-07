/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:23:07 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:41 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs an integer (n) to a standard output
*/

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}
