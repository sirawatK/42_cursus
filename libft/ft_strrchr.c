/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:13:42 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 16:12:27 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;
	char	cast;

	cast = c;
	last = 0;
	while (*str)
	{
		if (*str == cast)
		{
			last = (char *)str;
		}
		str++;
	}
	if (cast == '\0')
	{
		return ((char *)str);
	}
	return (last);
}
