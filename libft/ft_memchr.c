/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:22:33 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 23:37:10 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;

	ch = s;
	while (n--)
	{
		if (*ch == (unsigned char)c)
		{
			return ((void *)ch); 
		}
		ch++;
	}
	return (0);
}
