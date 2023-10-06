/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:17:09 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/06 20:38:48 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, int num)
{
	const unsigned char	uc_val = (unsigned char) value;
	void				*ptr_origin;

	ptr_origin = ptr;
	while (num > 0)
	{
		*(unsigned char *)ptr = uc_val;
		ptr++;
		num--;
	}
	return (ptr_origin);
}
