/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rfc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:00 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:31:33 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define RET 0
#define FD 1

char	*ft_rfc(char *file)
{
	char	*fc;
	char	buf[RFC_READ + 1];
	int		i[2];

	if ((i[FD] = open(file, O_RDONLY)) != -1)
	{
		fc = ft_strnew();
		while ((i[RET] = (int)read(i[FD], buf, RFC_READ)) > 0)
		{
			buf[i[RET]] = '\0';
			ft_strspush(&fc, buf);
		}
		close(i[FD]);
		if (i[RET] != -1)
			return (fc);
		free(fc);
	}
	return ((char*)0);
}
