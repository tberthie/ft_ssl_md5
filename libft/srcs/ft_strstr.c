/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:35 by tberthie          #+#    #+#             */
/*   Updated: 2017/07/08 16:05:02 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *needle)
{
	unsigned int	needle_len;

	needle_len = ft_strlen(needle);
	while (*str && ft_strncmp(needle, str, needle_len))
		++str;
	return (*str) ? str : (char*)0;
}
