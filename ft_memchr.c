/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	i = 0;
	cs = (unsigned char *)s;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)(cs + i));
		i++;
	}
	return (NULL);
}
