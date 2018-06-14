/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:32 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:50:33 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strcjoin(const char *s1, const char *s2, char c)
{
	char	*str;
	char	*beg;

	str = (char*)ft_m(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	beg = str;
	while (*s1)
		*str++ = *s1++;
	*str++ = c;
	while (*s2)
		*str++ = *s2++;
	*str ^= *str;
	return (beg);
}
