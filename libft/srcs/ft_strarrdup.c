/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:05 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:37:53 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarrdup(char **array)
{
	char	**n_arr;

	n_arr = (char**)ft_parrnew();
	while (*array)
		ft_parrpush((void***)&n_arr, ft_strdup(*array++));
	return (n_arr);
}
