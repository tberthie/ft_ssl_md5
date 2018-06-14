/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsins.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:23 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:37:37 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_strsins(char **str, char *ins, unsigned int i)
{
	char	*n_str;
	char	c;

	n_str = ft_strnew();
	c = (*str)[i];
	(*str)[i] = '\0';
	ft_strspush(&n_str, *str);
	ft_strspush(&n_str, ins);
	(*str)[i] = c;
	ft_strspush(&n_str, *str + i);
	free(*str);
	*str = n_str;
}
