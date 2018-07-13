/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:36:13 by ztisnes           #+#    #+#             */
/*   Updated: 2018/07/12 21:56:19 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int base, int power)
{
	int	sum;
	int	tmp;

	sum = 1;
	tmp = base;
	while (power > 0)
	{
		if (power % 2 == 1)
			sum *= tmp;
		tmp *= tmp;
		power /= 2;
	}
	return (sum);
}
