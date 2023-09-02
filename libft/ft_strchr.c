/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:56:38 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 16:12:16 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	cast;

	cast = c;
	while (*str)
	{
		if (*str == cast)
		{
			return ((char *)str);
		}
		str++;
	}
	if (cast == '\0')
	{
		return ((char *)str);
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s1 = strchr("teste",1024);
	if (!s1)
		printf("NULL_s1");
	char *s2 = ft_strchr("teste",1024);
	if (!s2)
		printf("NULL_s2");
}*/