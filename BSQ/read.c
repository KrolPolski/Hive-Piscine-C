/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:30:20 by rboudwin          #+#    #+#             */
/*   Updated: 2023/07/19 20:47:14 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*handle_failed_read(char *buf, int fd, int bytes_read)
{
	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (NULL);
	}
	return (buf);
}

char	*create_buffer(char *filename)
{
	char	*buf;
	int		fd;
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("map error\n");
		return (NULL);
	}
	buf = (char *)malloc(5000);
	if (!buf)
	{
		close(fd);
		return (NULL);
	}
	bytes_read = read(fd, buf, 5000);
	buf = handle_failed_read(buf, fd, bytes_read);
	close(fd);
	return (buf);
}

char	*read_stdin(void)
{
	char	*buf;
	int		bytes_read;

	buf = (char *)malloc(5000);
	if (!buf)
	{
		return (NULL);
	}
	bytes_read = read(STDIN_FILENO, buf, 5000);
	if (bytes_read == -1)
	{
		free(buf);
		ft_putstr("map error");
		return (NULL);
	}	
	buf[bytes_read] = '\0';
	return (buf);
}

char	**read_all_maps(int argc, char **argv)
{
	char	**all_maps;
	int		i;

	i = 0;
	all_maps = (char **)malloc((argc - 1) * sizeof(char *));
	if (!all_maps)
	{
		return (NULL);
	}
	while (i < argc - 1)
	{
		all_maps[i] = create_buffer(argv[i + 1]);
		if (!all_maps[i])
		{
			free(all_maps[i]);
		}
		i++;
	}
	return (all_maps);
}
