/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 06:22:01 by parmando          #+#    #+#             */
/*   Updated: 2024/06/20 06:22:07 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int u)
{
	int	len;

	len = 0;
	if (u <= 9)
	{
		ft_putstr_char(u + '0');
		len++;
	}
	if (u >= 10)
	{
		len += ft_putnbr(u / 10);
		len += ft_putnbr(u % 10);
	}
	return (len);
}
