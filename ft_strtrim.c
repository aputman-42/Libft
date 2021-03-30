/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 06:02:39 by aputman           #+#    #+#             */
/*   Updated: 2021/03/27 00:42:54 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	start_check;
	size_t	end;
	size_t	end_check;
	int		search;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (1)
	{
		start_check = start;
		end_check = end;
		search = -1;
		while (set[++search])
		{
			if (s1[start] == set[search])
				++start;
			if (s1[end] == set[search])
				--end;
		}
		if (start == start_check && end == end_check)
			return (ft_substr(s1, start, end - start + 1));
	}
}
