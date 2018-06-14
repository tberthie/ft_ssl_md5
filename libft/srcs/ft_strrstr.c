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

char	*ft_strrstr(char *str, char *needle)
{
	unsigned int	needle_len;
	unsigned int	str_len;

	needle_len = ft_strlen(needle);
	str_len = ft_strlen(str);
	while (str_len && ft_strncmp(needle, &(str[str_len - 1]), needle_len))
		str_len--;
	return (str_len) ? &(str[str_len - 1]) : (char*)0;
}
