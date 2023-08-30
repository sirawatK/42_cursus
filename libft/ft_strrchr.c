/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:13:42 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/30 23:16:55 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == c)
		{
			last = (char *)str;
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (last);
}
