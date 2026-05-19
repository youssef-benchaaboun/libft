/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:52 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/19 15:11:44 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*re;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	re = malloc(n * size);
	if (!re)
		return (NULL);
	ft_bzero(re, n * size);
	return (re);
}
