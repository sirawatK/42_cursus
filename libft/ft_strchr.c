/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:56:38 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/30 23:15:47 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
