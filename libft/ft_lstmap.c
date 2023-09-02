/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:09:23 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 18:02:39 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	curr = lst;
	while (curr)
	{
		temp = ft_lstnew(f(curr->content));
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, temp);
		curr = curr->next;
	}
	return (new_lst);
}
