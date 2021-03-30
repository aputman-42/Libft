/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:32:06 by aputman           #+#    #+#             */
/*   Updated: 2021/03/27 00:10:15 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_number_length(int n)
{
	size_t	nb_length;

	nb_length = 0;
	while (n > 0)
	{
		n /= 10;
		++nb_length;
	}
	return (nb_length);
}

static char		*compute_string(int n, size_t sign, size_t len)
{
	char	*s;

	if (!(s = (char *)ft_calloc(len + sign + 1, sizeof(char))))
		return (NULL);
	if (sign)
		s[0] = '-';
	while (len-- - sign)
	{
		s[len + sign] = n % 10 + '0';
		n /= 10;
	}
	s[len + sign] = n % 10 + '0';
	return (s);
}

char			*ft_itoa(int n)
{
	size_t	sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		sign = 1;
	else
		sign = 0;
	if (sign)
		n = -n;
	return (compute_string(n, sign, get_number_length(n)));
}
