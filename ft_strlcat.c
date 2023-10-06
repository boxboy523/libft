/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:10:54 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/06 21:17:09 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *restrict dst, const char *restrict src, int dstsize)
{
	int	start;
	int	index;
	int	src_len;

	start = ft_strlen(dst);
	index = 0;
	src_len = ft_strlen(src);
	while (src[index] != '\0' && index + start + 1 < dstsize)
	{
		dst[start + index] = src[index];
		index++;
	}
	dst[start + index] = '\0';
	if (start < dstsize)
		return (start + src_len);
	else
		return (src_len + dstsize);
}
