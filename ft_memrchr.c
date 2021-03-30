/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:20:11 by aputman           #+#    #+#             */
/*   Updated: 2021/03/29 15:36:45 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	while (n--)
		if (((unsigned char *)s)[n] == (unsigned char)c)
			return ((unsigned char *)s + n);
	return (NULL);
}
