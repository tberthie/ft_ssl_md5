/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:46:38 by tberthie          #+#    #+#             */
/*   Updated: 2017/05/08 22:52:54 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, int size)
{
	char	*dup;

	dup = (char*)ft_m(sizeof(char) * (unsigned int)(size + 1));
	dup[size] = 0;
	while (size--)
		dup[size] = str[size];
	return (dup);
}
