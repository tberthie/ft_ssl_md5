/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:12 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/24 17:36:29 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strarrstr(char **array, char *str)
{
	int		i;

	i = 0;
	while (array[i] && ft_strcmp(array[i], str))
		++i;
	return (array[i]) ? i : -1;
}
