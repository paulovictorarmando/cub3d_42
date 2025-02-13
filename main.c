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

void	new_line(char **args, char *line, int nl)
{
	int	i;
	char	**tmp;

	i = 0;
	tmp = (char **)malloc(sizeof(char *) * (nl + 2));
	i = -1;
	while (args[++i])
		tmp[i] = args[i];
		
	tmp[i] = line;
	tmp[i + 1] = 0;
	if (args)
		free(args);
	args = tmp;	
}

char	**read_file(int fd)
{
	char	**args;
	char	*line;
	char	*tmp;
	int	nl;

	if( fd < 0)
		return (0);
	args = 0;
	nl = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = ft_strchr(line, '\n');
		*tmp = '\0';
		nl =+ 1;
		new_line(args, line, nl);
	}
	return (args);
	
}

int	main(int ac, char **av)
{
	char	**args;

	arg_check(ac, av);
	args = read_file(open(av[1], O_RDONLY));
	while(args)
	{
		printf("%s\n", *args);
		args++;
	}
	ft_printf("Acabou\n");
	return (0);
}
