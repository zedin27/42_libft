/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:19:31 by ztisnes           #+#    #+#             */
/*   Updated: 2019/02/24 20:56:30 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void				ft_print_queue(t_queue *queue)
{
	// ft_putstr((char*)queue->first->content);
	if (is_empty(queue))
		ft_putstr("Empty queue\n");
	else
	{
		printf("\nQueue contains: \n");
		while (!is_empty(queue))
		{
			// ft_putstr(*(int *)queue->first->content);
			// ik-todo: check dereference
			int print = *(int *)queue->first->content;
			printf("%d \n", print);
			dequeue(queue);
		}
	}
}
