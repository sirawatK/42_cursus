/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:46:18 by sikulnok          #+#    #+#             */
/*   Updated: 2023/08/25 22:47:41 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skipspace(char *str, int *i, int *sign)
{
	*i = 0;
	*sign = 1;
	while (str[*i] && (str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v' 
			|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == ' '))
	{
		*i = *i + 1;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	skipspace(str, &i, &sign);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * sign);
}
