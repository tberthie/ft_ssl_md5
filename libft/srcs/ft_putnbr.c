/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:45 by tberthie          #+#    #+#             */
/*   Updated: 2017/03/25 18:25:44 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	i = 1;
	while ((unsigned int)nb / i > 9)
		i *= 10;
	while (i)
	{
		ft_putchar((char)((unsigned int)nb / i % 10) + '0');
		i /= 10;
	}
}
