/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:19:31 by ztisnes           #+#    #+#             */
/*   Updated: 2019/02/21 16:22:55 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				print_queue(t_queue *queue)
{
	while (!is_empty(queue))
	{
		ft_putstr((char*)queue->first->content);
		ft_putstr(" ");
		dequeue(queue);
	}
}
