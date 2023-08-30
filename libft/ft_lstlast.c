/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:11:23 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/28 20:11:23 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	while (curr->next)
	{
		curr = curr->next;
	}
	return (curr);
}
/*
#include <stdio.h>
int main(void)
{
	t_list *list = 0;
    t_list *node1 = ft_lstnew("node 1");
    t_list *node2 = ft_lstnew("node 2");
    t_list *node3 = ft_lstnew("node 3");
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
	t_list *last = ft_lstlast(list);
	printf("%s",(char *)last->content);
}*/
