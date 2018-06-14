/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:16 by tberthie          #+#    #+#             */
/*   Updated: 2017/07/08 16:04:02 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char c)
{
	char	*ptr;

	ptr = (char*)0;
	while (*str)
	{
		if (*str == c)
			ptr = str;
		++str;
	}
	return (ptr);
}
