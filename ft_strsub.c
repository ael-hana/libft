/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 03:42:56 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/28 20:16:15 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s || !ft_strcmp(s, ""))
		return (NULL);
	if (!(ptr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	return (ft_strncpy(ptr, s + start, len));
}
