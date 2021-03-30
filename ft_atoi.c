/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 00:05:51 by aputman           #+#    #+#             */
/*   Updated: 2021/03/30 08:46:02 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		result;

	result = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-')
		sign = -1;
	else
		sign = 1;
	if (*nptr == '+' || *nptr == '-')
		++nptr;
	while (nptr && ft_isdigit(*nptr))
		result = result * 10 + *nptr++ - '0';
	return (result * sign);
}
