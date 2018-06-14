/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:44:49 by tberthie          #+#    #+#             */
/*   Updated: 2017/03/24 11:46:49 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strcount(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
		if (*s++ == c)
			count++;
	return (count);
}
