/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:31:28 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 21:53:15 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return ((void *)0);
}