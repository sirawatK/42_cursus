/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:44:32 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 20:20:50 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_c(char s, char c)
{
	if (s == c)
	{
		return (1);
	}
	return (0);
}

char	**creat_strptr(const char *s, char c)
{
	int		in_word;
	size_t	strptr_len;
	char	**temp;

	strptr_len = 0;
	in_word = 0;
	while (*s)
	{
		if (!in_c(*s, c))
		{
			if (in_word == 0)
			{
				in_word = 1;
				strptr_len++;
			}
		}
		else
			in_word = 0;
		s++;
	}
	temp = (char **)malloc(sizeof(char *) * (strptr_len + 1));
	if (!temp)
		return (0);
	temp[strptr_len] = 0;
	return (temp);
}

char	*creat_str(const char *s, char c)
{
	size_t	str_len;
	char	*temp;

	str_len = 0;
	while (in_c(*s, c) && *s)
		s++;
	while (!in_c(*s, c) && *s)
	{
		s++;
		str_len++;
	}
	temp = (char *)malloc(str_len + 1);
	if (!temp)
		return (0);
	temp[str_len] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**str_ptr;
	int		index;

	str_ptr = creat_strptr(s, c);
	if (!str_ptr)
		return (0);
	index = 0;
	while (*s)
	{
		while (in_c(*s, c) && *s)
			s++;
		if (*s)
		{
			str = creat_str(s, c);
			str_ptr[index] = str;
			index++;
			while (!in_c(*s, c) && *s)
				*str++ = *s++;
		}
	}
	return (str_ptr);
}
/* #include <stdio.h>
int	main(void)
{
	char **res = ft_split("---sada-sd-asd-asd-as-das-d--",'-');
	int i = 0;
	while (res[i])
	{
		printf("%s\n",res[i]);
		i++;
	}
}*/
