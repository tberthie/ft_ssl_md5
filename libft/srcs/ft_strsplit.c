/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:25:38 by tberthie          #+#    #+#             */
/*   Updated: 2017/10/01 14:54:34 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char		**ft_strsplit(char *s, char c)
{
	char		**tab;
	char		*word;

	tab = (char**)ft_parrnew();
	word = ft_strnew();
	while (*s)
	{
		if (*s != c)
			ft_strpush(&word, *s);
		else if (*word)
		{
			ft_parrpush((void***)&tab, word);
			word = ft_strnew();
		}
		s++;
	}
	if (*word)
		ft_parrpush((void***)&tab, word);
	else
		free(word);
	return (tab);
}
