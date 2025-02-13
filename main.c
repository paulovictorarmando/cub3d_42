/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:45:42 by parmando          #+#    #+#             */
/*   Updated: 2025/02/13 12:46:09 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	arg_check(int ac, char **av)
{
	if (ac != 2)
	{
		ft_printf("Error\n<use: ./so_long <map_file.cub>>\n");
		exit (1);
	}
	if (ft_strcmp(av[1] + ft_strlen(av[1]) - 4, ".cub") && ft_strlen(av[1]) > 4)
	{
		ft_printf("Error\n<invalid map format (only .cub allowed)>\n");
		exit (1);
	}
}

int	main(int ac, char **av)
{
	arg_cheack(ac, av);
	ft_printf("jogar");
	return (0);
}
