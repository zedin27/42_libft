/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42vecmac <42vecmac@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:20:49 by 42vecmac          #+#    #+#             */
/*   Updated: 2018/07/09 20:52:10 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bits(unsigned char octet)
{
	int				size;
	unsigned int	bit;

	size = 8;
	while (size--)
	{
		bit = (octet>>size & 1) + '0';
		write(1, &bit, 1);
	}
}
