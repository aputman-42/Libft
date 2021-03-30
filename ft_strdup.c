/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 04:49:05 by aputman           #+#    #+#             */
/*   Updated: 2021/03/26 23:28:03 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s);
	if (!(new = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	return (ft_memcpy(new, s, len));
}
