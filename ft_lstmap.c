/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 00:56:28 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 01:03:52 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *ptr;

	head = f(lst);
	ptr = head;
	while (lst->next)
	{
		ptr->next = f(lst->next);
		head = head->next;
		ptr = ptr->next;
	}
	return (head);
}
