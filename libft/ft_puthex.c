/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 06:20:09 by parmando          #+#    #+#             */
/*   Updated: 2024/06/20 06:20:17 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert_hex(unsigned long int p)
{
	int	len;

	len = 0;
	if (p >= 16)
	{
		len += ft_convert_hex(p / 16);
		len += ft_convert_hex(p % 16);
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
			ft_putchar_fd(p - 10 + 'a', 1);
			len++;
		}
	}
	return (len);
}

int	ft_puthex(unsigned int n)
{
	return (ft_convert_hex(n));
}
