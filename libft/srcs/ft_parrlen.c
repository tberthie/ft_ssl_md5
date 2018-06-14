/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:14 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/12 17:49:35 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_parrlen(void **array)
{
	void	**beg;

	beg = array;
	while (*array)
		++array;
	return ((unsigned int)(array - beg));
}
