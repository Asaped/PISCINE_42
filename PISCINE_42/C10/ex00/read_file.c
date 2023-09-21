/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:14:07 by moturki           #+#    #+#             */
/*   Updated: 2023/09/20 15:28:46 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	char	buffer;
	int		fd;

	if (ac == 1)
		write(0, "File name missing.\n", 19);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			write(0, "Cannot read file.\n", 18);
		while (read(fd, &buffer, 1) > 0)
			write(1, &buffer, 1);
		close(fd);
	}
	if (ac > 2)
		write(0, "Too many arguments.\n", 20);
}
