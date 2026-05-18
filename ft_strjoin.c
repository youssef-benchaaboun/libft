/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*re;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	re = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!re)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
		re[j++] = s1[i++];
	i = 0;
	while (s2[i])
		re[j++] = s2[i++];
	re[j] = '\0';
	return (re);
}
