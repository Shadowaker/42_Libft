/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:56:53 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/15 16:37:26 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	t_list	*tmp;
	int		size;

	size = ft_lstsize(lst);
	new_l = (t_list *) malloc(sizeof(t_list) * size);
	if (!new_l)
		return (NULL);
	while (lst->next != NULL)
	{
		new_n = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new_l, new_n);
		tmp = lst;
		ft_delone(lst);
		lst = tmp->next;
	}
	return (new_l);
}
