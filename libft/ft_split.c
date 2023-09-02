/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:24:22 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 23:38:15 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_c(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

char	**creat_strptr(const char *s, char c, int *size)
{
	int		in_word;
	size_t	strptr_len;
	char	**temp;

	strptr_len = 0;
	in_word = 0;
	while (*s)
	{
		if (!in_c(*s, c) && in_word == 0)
		{
			in_word = 1;
			strptr_len++;
		}
		else if (in_c(*s, c))
			in_word = 0;
		s++;
	}
	temp = (char **)malloc(sizeof(char *) * (strptr_len + 1));
	*size = strptr_len;
	if (!temp)
		return (0);
	temp[strptr_len] = 0;
	return (temp);
}

int	count_len(const char *s, char c)
{
	int	str_len;

	str_len = 0;
	while (!in_c(*s, c) && *s)
	{
		s++;
		str_len++;
	}
	return (str_len);
}

void	free_result(char **s, int index)
{
	while (index >= 0)
	{
		free(s[index]);
		index--;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		str_len;
	int		word_len;
	int		i;
	int		index;

	result = creat_strptr(s, c, &word_len);
	if (!result)
		return (0);
	index = -1;
	i = 0;
	while (++index < word_len)
	{
		while (s[i] && in_c(s[i], c))
			i++;
		str_len = count_len(&s[i], c);
		result[index] = ft_substr(s, i, str_len);
		if (!result[index])
		{
			free_result(result, index);
			return (0);
		}
		i += str_len;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char 
	char c = ' ';
	char **res = ft_split(str, c);
	printf("%d \n",count_word(str, c));
	int i = 0;
	while(res[i])
	{
		printf("%s\n",res[i]);
		i++;
	}
	
}*/