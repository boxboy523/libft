/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:38:26 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 14:40:59 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	index;
	int				cmp1;
	int				cmp2;
	char			*cs1;
	char			*cs2;

	index = 0;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	while (index < n)
	{
		if (cs1[index] != cs2[index])
		{
			cmp1 = (unsigned char)cs1[index];
			cmp2 = (unsigned char)cs2[index];
			return (cmp1 - cmp2);
		}
		index++;
	}
	return (0);
}
