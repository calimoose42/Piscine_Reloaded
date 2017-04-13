/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:58:38 by arohani           #+#    #+#             */
/*   Updated: 2017/04/13 16:08:59 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int fd)
{
	char buf;

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int		main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
