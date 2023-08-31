/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:27:41 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/31 12:52:08 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*last_d;
	const char	*last_s;

	if (dst == src || !n)
		return (dst);
	d = dst;
	s = src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		last_d = d + (n - 1);
		last_s = s + (n - 1);
		while (n--)
			*last_d-- = *last_s--;
	}
	return (dst);
}
