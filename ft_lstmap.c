/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curent;
	t_list	*new;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		curent = ft_lstnew(f(lst->content));
		if (!curent)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, curent);
		lst = lst->next;
	}
	return (new);
}
