#include "libft.h"

/*static t_list *lstlast(t_list *lst)
{
		if(!lst)
				return (NULL);
		while(lst->next)
				lst=lst->next;
		return (lst);
}*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
