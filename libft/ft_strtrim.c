/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:47:49 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 22:54:44 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*creat(const char *s1, const char *set, size_t *l, size_t *len)
{
	size_t	left;
	size_t	right;
	size_t	temp_len;
	char	*temp;

	left = 0;
	right = ft_strlen(s1) - 1;
	while (in_set(s1[left], set) && s1[left])
		left++;
	while (in_set(s1[right], set) && s1[right])
		right--;
	temp_len = right - left + 1;
	temp = (char *)malloc(temp_len + 1);
	if (!temp)
		return (0);
	temp[temp_len] = '\0';
	*l = left;
	*len = temp_len;
	return (temp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		cpy_l;
	size_t		temp_len;
	char		*temp;

	temp = creat(s1, set, &cpy_l, &temp_len);
	if (!temp)
		return (0);
	ft_memcpy(temp, s1 + cpy_l, temp_len);
	return (temp);
}
/*
int main(void)
{
	char *s = ft_strtrim("  \t \t \n   \n\n\n\t"," \t\n");
	printf("%s",s);
}*/