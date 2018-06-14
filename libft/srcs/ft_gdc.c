/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gdc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:48:20 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/20 19:48:28 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <dirent.h>

char	**ft_gdc(char *path)
{
	char			**rc;
	DIR				*dir;
	struct dirent	*dirent;

	if ((dir = opendir(path)))
	{
		rc = (char**)ft_parrnew();
		readdir(dir);
		readdir(dir);
		while ((dirent = readdir(dir)))
			if (ft_strcmp(dirent->d_name, ".") && ft_strcmp(dirent->d_name, ".."))
				ft_parrpush((void***)&rc, ft_strdup(dirent->d_name));
		closedir(dir);
		return (rc);
	}
	return ((char**)0);
}
