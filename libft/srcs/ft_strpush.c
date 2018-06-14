/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:13 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:45:01 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_strpush(char **str, char c)
{
	char		*n_str;
	unsigned int	len;

	len = ft_strlen(*str);
	n_str = (char*)ft_m(len + 2);
	n_str[len] = c;
	n_str[len + 1] = '\0';
	while (len--)
		n_str[len] = (*str)[len];
	free(*str);
	*str = n_str;
}
