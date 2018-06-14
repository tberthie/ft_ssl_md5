/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:35 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:48:37 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <sys/stat.h>

unsigned char	ft_isdir(char *path)
{
	struct stat		s;

	if (!stat(path, &s))
		return (S_ISDIR(s.st_mode));
	return (0);
}
