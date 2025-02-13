/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:10:08 by parmando          #+#    #+#             */
/*   Updated: 2024/05/14 13:02:38 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	val;
	unsigned char	*ptr;
	size_t			index;

	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		ptr[index] = val;
		index++;
	}
	return (s);
}
