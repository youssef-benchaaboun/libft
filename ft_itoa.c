/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:52 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/20 16:33:24 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nb)
{
	size_t	i;

	i = 1;
	if (nb < 0)
	{
		nb = -1 * nb;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*re;
	size_t	i;
	long	nb;

	re = malloc(ft_len(n) + 1);
	if (!re)
		return (NULL);
	nb = (long)n;
	i = 0;
	if (nb < 0)
		nb = -1 * nb;
	while (i < ft_len(n))
	{
		re[ft_len(n) - i - 1] = (nb % 10 + '0');
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		re[0] = '-';
	re[ft_len(n)] = '\0';
	return (re);
}
