/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:30:11 by parmando          #+#    #+#             */
/*   Updated: 2024/05/20 09:12:23 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		index;
	char				*s1;

	if (!s)
		return (NULL);
	s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s1)
		return (NULL);
	index = 0;
	while (index < ft_strlen(s))
	{
		s1[index] = (*f)(index, s[index]);
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
