/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:56:13 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 20:13:15 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char	*a;
	const char	*b;
	size_t		remaining;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && n > 0)
	{
		a = haystack;
		b = needle;
		remaining = n;
		while (*b != '\0' && *a == *b && remaining > 0)
		{
			a++;
			b++;
			remaining--;
		}
		if (*b == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
		n--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	const char s[] = "hellllloworld";
	const char find[] = "world";
	char *res1;
	char *res2;

	for(unsigned long i = 1 ; i < sizeof(s); i++)
	{
		res1 = ft_strnstr(s,find,i);
		res2 = strnstr(s,find,i);
		printf("%s %s\n",res1,res2);
	}
}*/