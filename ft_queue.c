/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 01:11:16 by ztisnes           #+#    #+#             */
/*   Updated: 2019/02/22 13:01:17 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue				*init_queue(void)
{
	t_queue			*node;
	node = (t_queue *)ft_memalloc(sizeof(t_queue));
	node->first = NULL;
	node->last = NULL;
	return (node);
}

void				enqueue(t_queue *queue, void *content)
{
	t_list			*node;
	node = (t_list *)ft_memalloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	if (!queue->last)
	{
		queue->last = node;
		queue->first = node;
	}
	else
	{
		queue->last->next = node;
		queue->last = queue->last->next;
	}
	return ;
}

void				*dequeue(t_queue *queue)
{
	t_list			*tmp;

	tmp = queue->first;
	if (!tmp)
		return (NULL);
	else
	{
		queue->first = tmp->next;
		return (tmp->content);
	}

}

void 				*peek_queue(t_queue *queue)
{
	if (queue->first == NULL)
		return (NULL);
	return (queue->first->content);
}

int					is_empty(t_queue *queue)
{
	return (queue->first == NULL);
}
