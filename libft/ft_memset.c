/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:05:05 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 14:36:00 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cast;
	unsigned char	*p;

	p = s;
	i = 0;
	cast = c;
	while (i < n)
	{
		p[i] = cast;
		i++;
	}
	return (s);
}
