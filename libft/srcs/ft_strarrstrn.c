/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrstrn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:21 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:50:22 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strarrstrn(char **array, char *str, unsigned int n)
{
	int		i;

	i = 0;
	while (array[i] && ft_strncmp(str, array[i], n))
		++i;
	return (array[i]) ? i : -1;
}
