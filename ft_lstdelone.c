/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 23:51:44 by ztisnes           #+#    #+#             */
/*   Updated: 2018/09/06 19:00:00 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delets one node from the linked list
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;

	node = *alst;
	del((node->content), (node->content_size));
	ft_memdel((void **)alst);
}
