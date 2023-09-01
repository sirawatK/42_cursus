/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:35:16 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 23:02:46 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	remaining_len;

	if (!s || start >= ft_strlen(s))
	{
		temp = (char *)malloc(1);
		if (!temp)
			return (0);
		temp[0] = '\0';
		return (temp);
	}
	remaining_len = ft_strlen(s + start);
	if (len >= remaining_len)
		len = remaining_len;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	ft_memcpy(temp, s + start, len);
	temp[len] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int main(void)
{
	for(size_t i = 0;i<12;i++)
	{
		char *s = ft_substr("hellworold",10,i);
		printf("%s %zu\n",s,ft_strlen(s));
	}
}*/