/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 01:28:04 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/26 16:40:28 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!n)
		return (0);
	while (*str1 == *str2 && --n)
	{
		++str1;
		++str2;
	}
	return (*str1 - *str2);
}
