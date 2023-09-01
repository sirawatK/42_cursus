/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:39:24 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/01 23:14:05 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*reverse_str(char *s)
{
	size_t	str_len;
	size_t	mid;
	size_t	i;

	i = 0;
	str_len = ft_strlen(s);
	mid = str_len / 2;
	while (i < mid)
	{
		ft_swap(&s[i], &s[str_len - i - 1]);
		i++;
	}
	return (s);
}

void	cast_n(int n, unsigned int *n_cast)
{
	if (n < 0)
	{
		*n_cast = -n;
	}
	else
	{
		*n_cast = n;
	}
}

char	*ft_itoa(int n)
{
	char			*temp;
	unsigned int	n_cast;
	size_t			len;
	size_t			i;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_intlen(n);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	temp[len] = '\0';
	if (n < 0)
		temp[len - 1] = '-';
	cast_n(n, &n_cast);
	i = 0;
	while (n_cast != 0)
	{
		temp[i] = (n_cast % 10) + 48;
		n_cast /= 10;
		i++;
	}
	return (reverse_str(temp));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "123456"; 
	char *s1;
	s1 = ft_itoa(-2147483648);
	printf("%s",s1);
}*/