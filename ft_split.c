/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:09:53 by aputman           #+#    #+#             */
/*   Updated: 2021/03/30 11:52:21 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	trigger;
	int	count;
	int	i;

	trigger = 0;
	count = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c && trigger == 0)
			trigger = 1;
		else if (s[i] == c && trigger == 1)
		{
			trigger = 0;
			++count;
		}
	}
	if (trigger == 1)
		++count;
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	char	*target;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	if (!(arr = (char **)ft_calloc(count, sizeof(char *))))
		return (NULL);
	i = 0;
	while (count)
	{
		while (*s == c)
			++s;
		target = ft_strchr(s, c);
		if (!target)
			arr[i++] = ft_substr(s, 0, ft_strlen(s));
		else
			arr[i++] = ft_substr(s, 0, target - s);
		s += (target - s);
		--count;
	}
	return (arr);
}
