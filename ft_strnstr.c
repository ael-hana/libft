/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:49:42 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/25 21:08:14 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;
	int		b;

	str1 = (char *)s1;
	str2 = (char *)s2;
	b = (int)n;
	if (!*s1)
		return ((char *)s1);
	while (*str1 && n > 0)
	{
		i = 0;
		--b;
		while (str1[i] != '\0' && str1[i] == str2[i])
			i += 1;
		if ((b - i) < 0)
			return (NULL);
		if (!str2[i])
			return (str1);
		++str1;
	}
	return (NULL);
}
