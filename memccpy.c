/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 00:54:43 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/24 01:43:55 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr;
	char	*ptr2;
	int		i;

	i = 0;
	ptr = dst;
	ptr2 = (char *)src;
	while (0 < n-- && *ptr2 != (char)c)
		*(ptr + i++) = *ptr2++;
	while (0 < n--)
	{
		*(ptr + i) = *ptr2++;
		ptr++;
	}
	if (((char *)dst)[i] == (char)c)
		return ((dst + i + 1));
	return (NULL);
}
