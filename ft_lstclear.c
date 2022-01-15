

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = *lst;
	while (node->next != NULL)
	{
		tmp = node;
		del(node);
		free(node);
		node = tmp->next;
	}
	*lst = NULL;
}
