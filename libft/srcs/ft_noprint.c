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

char			*ft_noprint(char *str, ...)
{
	va_list		lst;
	char		*tmp;
	char		*tmp2;

	tmp = ft_strnew();
	va_start(lst, str);
	while (*str)
		if (*str == '%' && *(str + 1) == 's' && (str += 2))
			ft_strspush(&tmp, va_arg(lst, char*));
		else if (*str == '%' && *(str + 1) == 'd' && (str += 2))
		{
			tmp2 = ft_itoa(va_arg(lst, int));
			ft_strspush(&tmp, tmp2);
			free(tmp2);
		}
		else if (*str == '%' && *(str + 1) == 'p' && (str += 2))
		{
			tmp2 = ft_utoabase((size_t)va_arg(lst, void*), 16);
			ft_strspush(&tmp, tmp2);
			free(tmp2);
		}
		else
			ft_strpush(&tmp, *str++);
	va_end(lst);
	return (tmp);
}
