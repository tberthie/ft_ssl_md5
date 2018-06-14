/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:51:29 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strsjoin(const char *s1, const char *s2, const char *in)
{
	char	*str;
	char	*beg;

	str = (char*)ft_m(sizeof(char)
		* (ft_strlen(s1) + ft_strlen(in) + ft_strlen(s2) + 1));
	beg = str;
	while (*s1)
		*str++ = *s1++;
	while (*in)
		*str++ = *in++;
	while (*s2)
		*str++ = *s2++;
	*str ^= *str;
	return (beg);
}
