/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:00:37 by aputman           #+#    #+#             */
/*   Updated: 2021/03/26 23:34:46 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	if (!(new = ft_strdup(s)))
		return (NULL);
	i = -1;
	while (s[++i])
		new[i] = f(i, s[i]);
	return (new);
}
