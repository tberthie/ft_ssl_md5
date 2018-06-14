/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrndup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:17 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:49:18 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrndup(void **array, unsigned int n)
{
	void			**new_array;
	unsigned int	i;

	new_array = (void**)ft_m(sizeof(void*) * (n + 1));
	i = 0;
	while (array[i] && n--)
	{
		new_array[i] = array[i];
		++i;
	}
	while (n--)
		new_array[i] = (void*)0;
	new_array[i] = (void*)0;
	return (new_array);
}
