/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:41:44 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/03 15:20:51 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = 0;
	}
	else if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int main() {
    t_list *list = 0;
    t_list *node1 = ft_lstnew("node 1");
    t_list *node2 = ft_lstnew("node 2");
    t_list *node3 = ft_lstnew("node 3");
    t_list *node4 = 0;

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node4);

    t_list *current = list;
    while (current != 0)
    {
        printf("Content: %s\n", (char *)(current->content));
        current = current->next;
    }
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
