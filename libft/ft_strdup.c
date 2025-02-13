/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:16:21 by parmando          #+#    #+#             */
/*   Updated: 2024/05/18 10:54:51 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*re;

	if (!s)
		return (NULL);
	re = malloc(ft_strlen(s) + 1);
	if (!re)
		return (NULL);
	ft_memcpy(re, s, ft_strlen(s));
	re[ft_strlen(s)] = 0;
	return (re);
}
