/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:10 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:49:12 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_parrjoin(void **a1, void **a2)
{
	void	**na;

	na = ft_parrnew();
	while (*a1)
		ft_parrpush(&na, *a1++);
	while (*a2)
		ft_parrpush(&na, *a2++);
	return (na);
}
