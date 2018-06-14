/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfrmchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:43 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:50:45 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfrmchr(char c, unsigned int nb)
{
	char	*str;

	str = ft_m(sizeof(char) * (nb + 1));
	str[nb] = '\0';
	while (nb--)
		str[nb] = c;
	return (str);
}
