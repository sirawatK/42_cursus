/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:44:27 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/28 14:44:27 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*temp;
	int		i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	i = 0;
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
char plus_one(unsigned int index, char s)
{
	(void)index;
	return s + 1;
}
#include <stdio.h>
int	main(void)
{
	printf("%s",ft_strmapi("01234",&plus_one));
}*/
