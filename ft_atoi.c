/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:41:23 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/15 16:51:52 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(unsigned char c)
{
	if (c == ' ')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	num;
	int			index;
	int			sign;

	index = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
		sign *= (str[index++] == '+') * 2 - 1;
	while (str[index] >= '0' && str[index] <= '9')
	{
		num *= 10;
		num += str[index] - '0';
		index++;
	}
	return ((int)(num * sign));
}
