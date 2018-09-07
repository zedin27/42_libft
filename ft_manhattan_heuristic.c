/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manhattan_heuristic.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 19:33:46 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:05 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Heuristic/algorithm usage with struct (position x and position y)
*/

int		ft_manhattan_heuristic(t_list *a, t_list *b)
{
	return (ft_abs(a->px - b->px) + ft_abs(a->py - b->py));
}
