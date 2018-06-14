/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:52:41 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/28 23:28:58 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char				*ft_utoabase(unsigned int n, unsigned int b)
{
	char			*str;
	unsigned int	t;
	unsigned int	i;

	i = 2;
	t = 1;
	while (n / t >= b)
	{
		++i;
		t *= b;
	}
	str = (char*)ft_m(sizeof(char) * i);
	i = 0;
	while (t)
	{
		str[i++] = "0123456789abcdef"[n / t % b];
		t /= b;
	}
	str[i] = '\0';
	return (str);
}
