/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:53:29 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/14 21:37:23 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int nb, unsigned int index, char *str)
{
	char	digit;

	digit = nb % 10 + '0';
	if (nb / 10 != 0)
		ft_putnbr(nb / 10, index + 1, str);
	str[index] = digit;
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*buf;
	char			*ans;
	unsigned int	i;
	size_t			len;

	buf = ft_calloc(12, sizeof(char));
	if (!buf)
		return (NULL);
	num = n * ((n < 0) * -2 + 1);
	ft_putnbr(num, 0, buf);
	buf[ft_strlen(buf)] = '-' * (n < 0);
	len = ft_strlen(buf);
	ans = ft_calloc(len + 1, sizeof(char));
	if (!ans)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ans[i] = buf[len - i - 1];
		i++;
	}
	free(buf);
	return (ans);
}
