/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:05:46 by parmando          #+#    #+#             */
/*   Updated: 2025/02/13 16:06:18 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	new_line(char ***args, char *line, int nl)
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = (char **)malloc(sizeof(char *) * (nl + 2));
	if (!tmp)
		return ;
	i = 0;
	while (i < nl)
	{
		tmp[i] = (*args)[i];
		i++;
	}
	tmp[i] = line;
	tmp[i + 1] = NULL;
	if (*args)
		free(*args);
	*args = tmp;
}

char	**read_file(int fd)
{
	char	**args;
	char	*line;
	char	*tmp;
	int		nl;

	if (fd < 0)
		return (0);
	args = 0;
	nl = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = ft_strchr(line, '\n');
		if (tmp)
			*tmp = '\0';
		new_line(&args, line, nl);
		nl += 1;
	}
	return (args);
}
