/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoben-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:47:53 by yoben-ch          #+#    #+#             */
/*   Updated: 2026/05/18 18:51:10 by yoben-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow(int sg, long re, char c)
{
	int	digit;

	digit = c - '0';
	if (sg == 1)
	{
		if (re > LONG_MAX / 10)
			return (-1);
		else if ((re == LONG_MAX / 10 && digit > LONG_MAX % 10))
			return (-1);
	}
	else if (sg == -1)
	{
		if (-re < LONG_MIN / 10)
			return (0);
		else if ((-re == LONG_MIN / 10) && (-digit < LONG_MIN % 10))
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *s)
{
	long	re;
	int		sg;
	int		i;

	sg = 1;
	re = 0;
	i = 0;
	while ((s[i] <= 13 && s[i] >= 9) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sg = -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0')
	{
		if (ft_overflow(sg, re, s[i]) < 1)
			return (ft_overflow(sg, re, s[i]));
		re = re * 10 + (s[i] - '0');
		i++;
	}
	return ((int)(sg * re));
}
