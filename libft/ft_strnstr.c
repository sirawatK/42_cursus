/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:56:13 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/25 22:45:01 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char	*a;
	const char	*b;

	if (*needle)
	{
		return ((char *)haystack);
	}
	while (*haystack && n > 0)
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *a == *b && n > 0)
		{
			a++;
			b++;
			n--;
		}
		if (*b == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
		n--;
	}
	return (0);
}*/