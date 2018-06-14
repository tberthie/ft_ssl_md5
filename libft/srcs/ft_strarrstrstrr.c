/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrstrstrr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:24 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:50:26 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strarrstrstrr(char **array, char *str)
{
	unsigned int	i;

	i = ft_parrlen((void**)array);
	while (i && !ft_strstr(array[i - 1], str))
		--i;
	return (i) ? array[i - 1] : (char*)0;
}
