/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 02:31:04 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/25 12:40:17 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s || !n)
		return (NULL);
	ptr = (unsigned char *)s;
	while (*ptr != (unsigned char)c && 0 < n--)
		ptr++;
	if (*ptr == (unsigned char)c && n > 0)
		return (ptr);
	return (NULL);
}
