/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 22:44:23 by tberthie          #+#    #+#             */
/*   Updated: 2017/07/05 16:09:23 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

void			ft_print(int fd, char *str, ...)
{
	va_list		lst;
	char		*tmp;

	va_start(lst, str);
	while (*str)
		if (*str == '%' && *(str + 1) == 's' && (str += 2))
		{
			tmp = va_arg(lst, char*);
			write(fd, tmp, ft_strlen(tmp));
		}
		else if (*str == '%' && *(str + 1) == 'd' && (str += 2))
		{
			tmp = ft_itoa(va_arg(lst, int));
			write(fd, tmp, ft_strlen(tmp));
			free(tmp);
		}
		else if (*str == '%' && *(str + 1) == 'p' && (str += 2))
		{
			tmp = ft_utoabase((size_t)va_arg(lst, void*), 16);
			write(fd, tmp, ft_strlen(tmp));
			free(tmp);
		}
		else
			write(fd, str++, 1);
	va_end(lst);
}
