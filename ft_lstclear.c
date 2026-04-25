#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curent;
	t_list	*next;

	if (!(*lst) || !lst)
		return ;
	curent = *lst;
	while (curent)
	{
		next = curent->next;
		del(curent->content);
		free(curent);
		curent = next;
	}
	*lst = NULL;
}
