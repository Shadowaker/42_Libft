#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	int	size;
	int	i;

	size = ft_lstsize(lst);
	new_l = ft_lstnew(NULL);
	ft_lstiter(lst, f);
	i = 0;
	while (i < size)
	{

	}
}
