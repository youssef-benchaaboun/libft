/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:52 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:52 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
