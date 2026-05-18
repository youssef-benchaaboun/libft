/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:52 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:52 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*re;
	char	*s;
	size_t	i;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	re = malloc(n * size);
	if (!re)
		return (NULL);
	s = (char *)re;
	i = 0;
	while (i < n * size)
		s[i++] = '\0';
	return (re);
}
