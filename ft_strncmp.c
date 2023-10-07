/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:07:18 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 14:13:54 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;
	int				cmp1;
	int				cmp2;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] != s2[index])
		{
			cmp1 = (unsigned char)s1[index];
			cmp2 = (unsigned char)s2[index];
			return (cmp1 - cmp2);
		}
		index++;
	}
	return (0);
}
