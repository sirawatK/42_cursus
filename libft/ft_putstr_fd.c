/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikulnok <sikulnok@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:04:12 by sikulnok          #+#    #+#             */
/*   Updated: 2023/09/02 14:53:25 by sikulnok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
#include <fcntl.h>
int main(void)
{
	char s[] = "test";
	const char *file = "test.txt";
	
	int fd = open(file,O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd(s, fd);
	close(fd);
}*/