/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:39 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/24 17:42:35 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	t;
	unsigned int	i;

	nb = (unsigned int)((n < 0) ? -n : n);
	i = 2 + (n < 0);
	t = 1;
	while (nb / t > 9)
	{
		++i;
		t *= 10;
	}
	str = (char*)ft_m(sizeof(char) * i);
	if ((i = n < 0))
		str[0] = '-';
	while (t)
	{
		str[i++] = nb / t % 10 + '0';
		t /= 10;
	}
	str[i] = '\0';
	return (str);
}
