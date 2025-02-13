/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:25:27 by parmando          #+#    #+#             */
/*   Updated: 2024/05/15 10:25:20 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[index] == s2[index] && s1[index] != '\0'
		&& s2[index] != '\0' && index < n - 1)
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
