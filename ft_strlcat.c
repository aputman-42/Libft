/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:58:10 by aputman           #+#    #+#             */
/*   Updated: 2021/03/27 00:44:09 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		++dst_len;
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		++i;
	}
	if (dst_len < size)
		dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
