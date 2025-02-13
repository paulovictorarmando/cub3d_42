/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:42:50 by parmando          #+#    #+#             */
/*   Updated: 2024/05/21 09:55:25 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	index;
	int	number;

	index = 0;
	sign = 1;
	number = 0;
	while (nptr[index] == ' ' || nptr[index] == '\n' || nptr[index] == '\t'
		|| nptr[index] == '\v' || nptr[index] == '\f' || nptr[index] == '\r')
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign *= -1;
		index++;
	}
	while (nptr[index] >= 48 && nptr[index] <= 57)
	{
		number = number * 10 + (nptr[index] - 48);
		index++;
	}
	return (number * sign);
}
