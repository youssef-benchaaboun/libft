/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/19 14:30:50 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	i;

	ld = ft_strlen(dst);
	i = 0;
	while (src[i] && ld + i < dstsize - 1 && dstsize > ld)
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (dstsize > ld)
		dst[ld + i] = '\0';
	else
		return (dstsize + ft_strlen(src));
	return (ld + ft_strlen(src));
}
