/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:49:42 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/25 01:13:33 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (*str1 && *str2 && n > 0)
	{
		i = 0;
		--n;
		while (str1[i] != '\0' && str1[i] == str2[i])
			i += 1;
		if ((n - i) <= 0)
			return (NULL);
		if (!str2[i])
			return (str1);
		++str1;
	}
	if (*s2 == '\0' && *s2 == *s1)
		return ((char *)s1);
	return (NULL);
}
