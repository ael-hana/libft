/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 01:47:39 by ael-hana          #+#    #+#             */
/*   Updated: 2015/11/26 16:27:45 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len);
	ft_memcpy(str, src, len);
	return (ft_memcpy(dst, str, len));
}
