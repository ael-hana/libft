/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 03:42:56 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/27 05:14:26 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s || !s[len -1] || !start || !len)
		return (NULL);
	if (!(ptr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	return (ft_strncpy(ptr, s + start, len));
}
