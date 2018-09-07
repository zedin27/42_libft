/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:54:57 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:04:35 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lcm(unsigned int a, unsigned int b)
{
	return ((ft_abs(a) * ft_abs(b)) / ft_gcd(a, b));
	// return (b / gcd(a, b)) * a;
}
