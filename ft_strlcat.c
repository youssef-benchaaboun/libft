/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ls = 0;
	ld = 0;
	i = 0;
	while (dst[ld])
		ld++;
	while (src[ls])
		ls++;
	while (src[i] && ld + i < dstsize - 1 && dstsize > ld)
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (dstsize > ld)
		dst[ld + i] = '\0';
	else
		return (dstsize + ls);
	return (ld + ls);
}
