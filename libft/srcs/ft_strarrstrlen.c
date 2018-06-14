/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrstrlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:18 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:50:20 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strarrstrlen(char **array)
{
	unsigned int	len;

	len = 0;
	while (*array)
	{
		if (ft_strlen(*array) > len)
			len = ft_strlen(*array);
		++array;
	}
	return (len);
}
