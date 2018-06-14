/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:32 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:36:07 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_strspush(char **str, char *push)
{
	char			*n_str;
	unsigned int	strlen;
	unsigned int	pushlen;

	strlen = ft_strlen(*str);
	pushlen = ft_strlen(push);
	n_str = ft_m(strlen + pushlen + 1);
	n_str[strlen + pushlen] = '\0';
	while (pushlen--)
		n_str[strlen + pushlen] = push[pushlen];
	if (n_str == *str)
		return ;
	while (strlen--)
		n_str[strlen] = (*str)[strlen];
	free(*str);
	*str = n_str;
}
