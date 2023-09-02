/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:22:33 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 15:15:17 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	unsigned char		cast;

	ch = s;
	cast = c;
	while (n--)
	{
		if (*ch == cast)
		{
			return ((void *)ch); 
		}
		ch++;
	}
	return (0);
}
