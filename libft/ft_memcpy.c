/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:04:35 by parmando          #+#    #+#             */
/*   Updated: 2024/05/14 13:26:47 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n-- > 0)
	{
		dst1[n] = src1[n];
	}
	return (dst);
}
