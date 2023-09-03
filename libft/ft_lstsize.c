/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:04:20 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/03 15:21:02 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	if (!lst)
		return (0);
	i = 0;
	curr = lst;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	t_list *list = 0;
    t_list *node1 = ft_lstnew("node 1");
    t_list *node2 = ft_lstnew("node 2");
    t_list *node3 = ft_lstnew("node 3");
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
	printf("%d",ft_lstsize(list));
}*/
