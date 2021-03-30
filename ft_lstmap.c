/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputman <aputman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:26:09 by aputman           #+#    #+#             */
/*   Updated: 2021/03/30 09:36:32 by aputman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	if (del)
		ft_lstclear(&lst, del);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	if (lst->next)
		new->next = ft_lstmap(lst->next, f, del);
	return (new);
}
