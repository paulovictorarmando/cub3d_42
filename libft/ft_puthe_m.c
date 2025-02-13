/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthe_m.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 06:19:53 by parmando          #+#    #+#             */
/*   Updated: 2024/06/20 06:19:59 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_hex(unsigned long int p)
{
	int	len;

	len = 0;
	if (p >= 16)
	{
		len += convert_hex(p / 16);
		len += convert_hex(p % 16);
	}
	else
	{
		if (p <= 9)
		{
			ft_putnbr_fd(p, 1);
			len++;
		}
		else
		{
			ft_putchar_fd(p - 10 + 'A', 1);
			len++;
		}
	}
	return (len);
}

int	ft_puthe_m(unsigned int n)
{
	return (convert_hex(n));
}
