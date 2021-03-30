/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 04:38:29 by aputman           #+#    #+#             */
/*   Updated: 2021/03/26 21:32:32 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_size;

	if (!*needle)
		return ((char *)haystack);
	needle_size = ft_strlen(needle);
	while (*haystack && n-- >= needle_size)
	{
		if (!(ft_memcmp(haystack, needle, needle_size)))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
