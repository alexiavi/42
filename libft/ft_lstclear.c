#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while ((*lst)->next)
	{
		ft_lstdelone(*lst, del);
		lst = (*lst)->next;
	}
}
//MAL