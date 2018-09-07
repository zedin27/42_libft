/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:56:36 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 18:56:56 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_gcd(int num, int den)
{
	int tmp;

	while (den != 0)
	{
		tmp = den;
		den = (num % den);
		num = tmp;
	}
	if (num < 0)
		num *= -1;
	return (num);
}
