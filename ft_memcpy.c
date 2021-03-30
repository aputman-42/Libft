/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:17:20 by aputman           #+#    #+#             */
/*   Updated: 2021/03/30 09:43:25 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	while (++i < (int)n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
