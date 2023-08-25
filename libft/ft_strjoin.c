/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:41:40 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/25 23:43:28 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mycpy(char *res, char *str, char *sep, int *index)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		res[*index] = str[i];
		i++;
		*index = *index + 1;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		res[*index] = sep[i];
		i++;
		*index = *index + 1;
	}
}

char	*creat(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		return (result);
	}
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (ft_strlen(sep) * (size - 1));
	result = (char *)malloc((total_len + 1) * sizeof(char));
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		index;

	result = creat(size, strs, sep);
	if (size == 0)
	{
		return (result);
	}
	i = 0;
	index = 0;
	while (i < size)
	{
		if (i < size - 1)
		{
			mycpy(result, strs[i], sep, &index);
		}
		else
		{
			mycpy(result, strs[i], "", &index);
		}
		i++;
	}
	result[index] = '\0';
	return (result);
}