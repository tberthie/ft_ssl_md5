/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/16 15:03:28 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_parrpush(void ***tab, void *elem)
{
	void	**n_tab;
	size_t	len;

	n_tab = ft_m(sizeof(void*) *
	(len = ft_parrlen(*tab) + 2));
	n_tab[--len] = 0;
	n_tab[--len] = elem;
	ft_memcpy((void*)n_tab, (void*)*tab, sizeof(void*) * len);
	free(*tab);
	*tab = n_tab;
}
