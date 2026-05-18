/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:47:53 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*re;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	re = malloc(ft_strlen(s) + 1);
	if (!re)
		return (NULL);
	i = 0;
	while (s[i])
	{
		re[i] = f(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
