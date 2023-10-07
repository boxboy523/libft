/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:07:30 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 21:14:39 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(int count, int size)
{
	void	*mem;

	mem = malloc(count * size);
	ft_memset(mem, 0, count * size);
	return (mem);
}
