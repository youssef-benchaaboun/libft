/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	cdst = (char *)dest;
	csrc = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			*(cdst + n - i) = *(csrc + n - i);
			i++;
		}
	}
	return (dest);
}
