/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:46:38 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/30 22:52:48 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dst == src || !n)
		return (dst);
	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
