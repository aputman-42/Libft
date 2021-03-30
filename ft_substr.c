/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:21:41 by aputman           #+#    #+#             */
/*   Updated: 2021/03/26 23:32:44 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*new;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (!(new = (char *)ft_calloc(n + 1, sizeof(char))))
		return (NULL);
	return (ft_memcpy(new, s + start, n));
}
