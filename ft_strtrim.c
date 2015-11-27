/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 06:02:43 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/27 09:36:19 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen_without_this_chr(char *str, char c, char v, char b)
{
	size_t	i;

	i = 0;
	while (*str == c || *str == v || *str == b)
		str++;
	while ((*str) && !(*str == c || *str == v || *str == b))
	{
		i += 1;
		++str;
	}
	return (i);
}

char				*ft_strtrim(char const *s)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(sizeof(char) *
				(1 + ft_strlen_without_this_chr((char *)s, ' ', '\n', '\t')));
	if (!s || !ptr)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	i = 0;
	while (*s)
	{
		if (!(*s == ' ' || *s == '\n' || *s == '\t'))
		{
			ptr[i] = *s;
			i += 1;
		}
		s++;
	}
	ptr[i] = '\0';
	return (ptr);
}
