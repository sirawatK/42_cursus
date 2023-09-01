/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:41:40 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/26 17:48:37 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	temp = (char *)malloc(s1_len + s2_len + 1);
	if (!temp)
		return (0);
	ft_memcpy(temp, s1, s1_len);
	ft_memcpy(temp + s1_len, s2, s2_len);
	temp[s1_len + s2_len] = '\0'; 
	return (temp);
}
/*#include <stdio.h>
int main(void)
{
	char s[] ="hello";
	char s2[] = " world";

	char *res = ft_strjoin(s,s2);
	printf("%s %zu",res,ft_strlen(res));
}*/