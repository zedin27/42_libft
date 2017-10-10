/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 19:20:54 by ztisnes           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/09 19:35:31 by ztisnes          ###   ########.fr       */
=======
/*   Updated: 2017/10/09 18:13:34 by ztisnes          ###   ########.fr       */
>>>>>>> 6f299f9c19d7bfc51bea58d499db216bc1823fab
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < 9)
	{
		n += 48;
		ft_putchar_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
