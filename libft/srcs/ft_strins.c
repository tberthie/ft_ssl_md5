/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:51 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:37:29 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_strins(char **str, char c, unsigned int i)
{
	char			*n_str;
	unsigned int	len;

	len = ft_strlen(*str) + 1;
	n_str = (char*)ft_m(len + 1);
	n_str[len] = '\0';
	while (--len != i)
		n_str[len] = (*str)[len - 1];
	n_str[len] = c;
	if (n_str == *str)
		return ;
	while (i--)
		n_str[i] = (*str)[i];
	free(*str);
	*str = n_str;
}
