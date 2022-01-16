/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:03:24 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/16 17:29:32 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_looper(t_list *lst, void *(*f)(void *), void (*del)(void *),
							t_list *new_n)
{
	t_list	*ptr;

	ptr = new_n;
	while (lst)
	{
		new_n = ft_lstnew(f(lst->content));
		if (!new_n)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&ptr, new_n);
	}
	return (ptr);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_n;
	t_list	*ptr;

	if (!f || !lst)
		return (NULL);
	new_n = ft_lstnew(f(lst->content));
	if (!new_n)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	if (lst->next == NULL)
		return (new_n);
	lst = lst->next;
	ptr = ft_looper(lst, f, del, new_n);
	return (ptr);
}
