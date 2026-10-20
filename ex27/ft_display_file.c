/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomanuel <tomanuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 01:00:40 by tomanuel          #+#    #+#             */
/*   Updated: 2026/10/20 01:00:40 by tomanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

static void	ft_error(char *msg)
{
	int	len;

	len = 0;
	while (msg[len])
		len++;
	write(2, msg, len);
	write(2, "\n", 1);
}

static int	ft_display(int fd)
{
	char	buf[BUF_SIZE];
	int		ret;

	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
		return (ft_error("File name missing."), 1);
	if (argc > 2)
		return (ft_error("Too many arguments."), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_error("Cannot read file."), 1);
	if (ft_display(fd) < 0)
		return (close(fd), ft_error("Cannot read file."), 1);
	close(fd);
	return (0);
}
