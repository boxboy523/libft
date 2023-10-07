/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:36 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 14:50:55 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	needle_size;
	unsigned int	i;

	if (needle[0] == '\0')
		return (haystack);
	needle_size = ft_strlen(needle);
	i = 0;
	while (i < len)
	{
		if (ft_strncmp(haystack + i, needle, needle_size) == 0)
			return (haystack + i);
		i++;
	}
	return ((char *)0);
}
