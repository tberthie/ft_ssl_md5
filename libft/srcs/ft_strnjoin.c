/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:06 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/14 17:12:22 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(int n, ...)
{
	char		*str[2];
	va_list		lst[2];
	int		i[2];

	i[0] ^= i[0];
	i[1] ^= i[1];
	va_copy(lst[1], lst[0]);
	va_start(lst[0], n);
	while (i[0]++ < n)
		i[1] += ft_strlen(va_arg(lst[0], char*));
	va_end(lst[0]);
	str[0] = ft_m(i[1] + 1);
	va_start(lst[1], n);
	i[0] ^= i[0];
	i[1] ^= i[1];
	while (i[0]++ < n)
	{
		str[1] = va_arg(lst[1], char*);
		ft_strcpy(str[0] + i[1], str[1]);
		i[1] += ft_strlen(str[1]);
	}
	va_end(lst[1]);
	return (str[0]);
}
