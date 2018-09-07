/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:46:42 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:01:51 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverse a given byte by bitmasks
*/

unsigned char	ft_reverse_bits(unsigned char octet)
{
	octet = (octet * 0x0202020202ULL & 0x010884422010ULL) % 1023;

	return (octet); //or return ((octet * 0x0202020202ULL & 0x010884422010ULL) % 1023);
}
