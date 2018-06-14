/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:06 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/14 17:12:22 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		**ft_parrinit(int n, ...)
{
	void		**arr;
	va_list		lst;
	int		i;

	arr = ft_m(sizeof(void*) * (n + 1));
	arr[n] = 0;
	va_start(lst, n);
	i = 0;
	while (i < n)
		arr[i++] = va_arg(lst, void*);
	va_end(lst);
	return (arr);
}
