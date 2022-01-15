/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:06:16 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/15 19:37:58 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (new == NULL)
		return ;
	if (node == NULL)
	{
		*lst = new;
		return ;
	}
	while (node->next != NULL)
		node = node->next;
	node->next = new;
}
