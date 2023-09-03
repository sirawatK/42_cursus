/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:20:10 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/03 15:20:55 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

#include <stdio.h>
int main(void)
{
	t_list *list = 0;
    t_list *node1 = ft_lstnew(ft_strdup("node 1"));
    t_list *node2 = ft_lstnew(ft_strdup("node 2"));
    t_list *node3 = ft_lstnew(ft_strdup("node 3"));
	//t_list *node4 = 0;

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
	//ft_lstadd_back(&list, node4);

    t_list *current = list;
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)(current->content));
        current = current->next;
    }
	ft_lstdelone(node1, del);
    ft_lstdelone(node2, del);
	ft_lstdelone(node3, del);

    printf("After deletion:\n");

    current = list;
    while (current != NULL)
    {
		if ((char *)(current->content) != 0)
        	printf("Content: %s\n", (char *)(current->content));
		else
			printf("NULL");
        current = current->next;
    }
	printf("size = %d",ft_lstsize(list));
}*/
