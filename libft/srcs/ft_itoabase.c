/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 15:27:47 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/28 23:59:00 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char				*ft_itoabase(int n, unsigned int b)
{
	char			*str;
	unsigned int	nb;
	unsigned int	t;
	unsigned int	i;

	nb = (unsigned int)((n < 0) ? -n : n);
	i = 2 + (n < 0);
	t = 1;
	while (nb / t >= b)
	{
		++i;
		t *= b;
	}
	str = (char*)ft_m(sizeof(char) * i);
	if ((i = n < 0))
		str[0] = '-';
	while (t)
	{
		str[i++] = "0123456789abcdef"[nb / t % b];
		t /= b;
	}
	str[i] = '\0';
	return (str);
}
