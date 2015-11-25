/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 08:52:45 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/25 04:17:14 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		save;

	i = 0;
	while (dst[i] && i < size)
		i += 1;
	save = i;
	i = 0;
	while (src[i] && i < size)
	{
		dst[save + i] = src[i];
		++i;
	}
	if (save < size)
		dst[save + i] = '\0';
	return (save + ft_strlen(src));
}
