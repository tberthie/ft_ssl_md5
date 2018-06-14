/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:31 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/14 16:32:56 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <unistd.h>

char	*ft_gnl(int fd)
{
	char	*line;
	char	c;

	c ^= c;
	line = ft_strnew();
	while (read(fd, &c, 1) == 1 && c != '\n')
	{
		if (c != 13)
			ft_strpush(&line, c);
	}
	if (c == '\n')
	{
		ft_strpush(&line, c);
		return (line);
	}
	free(line);
	return ((char*)0);
}
