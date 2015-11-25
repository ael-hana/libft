/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:29:10 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/25 17:45:20 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (!(ptr = (char *)s))
		return (NULL);
	while (*ptr && (*ptr != (char)c))
		ptr++;
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
