/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:19:31 by ztisnes           #+#    #+#             */
/*   Updated: 2019/02/25 16:02:04 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void				ft_print_queue(t_queue *queue)
{
	t_list *tmp;

	if (is_empty(queue))
		ft_putstr("Empty queue\n");
	else
	{
		ft_putstr("\nQueue contains: \n");
		while (queue->first != NULL)
		{
			tmp = queue->first;
			// ik-todo: check dereference
			char print = *(char *)tmp->content;
			int print_num = *(int *)tmp->content;
			printf("%c address %x\n", print, print_num);
			queue->first = tmp->next;
		}
	}
}
