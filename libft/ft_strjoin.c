/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:46:32 by parmando          #+#    #+#             */
/*   Updated: 2024/05/18 13:10:39 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	r;
	size_t	i;

	s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	r = 0;
	i = 0;
	while (i < ft_strlen(s1))
		s[r++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
		s[r++] = s2[i++];
	s[r] = '\0';
	return (s);
}
