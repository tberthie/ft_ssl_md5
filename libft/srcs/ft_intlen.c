/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 01:22:50 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/21 01:48:44 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_intlen(int nbr)
{
	unsigned int	nb;
	int				len;

	nb = nbr < 0 ? (unsigned int)-nbr : (unsigned int)nbr;
	len = (nbr < 0) + 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
