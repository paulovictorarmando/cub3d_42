/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 06:20:33 by parmando          #+#    #+#             */
/*   Updated: 2024/06/20 06:20:40 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	if (nbr == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		len++;
	}
	if (nbr >= 10)
		len += ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
	len++;
	return (len);
}
