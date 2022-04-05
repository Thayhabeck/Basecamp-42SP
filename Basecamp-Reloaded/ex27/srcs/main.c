/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:45:59 by thabeck-          #+#    #+#             */
/*   Updated: 2022/04/05 14:41:32 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

void	ft_puterr(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	ft_display_file(char *path)
{
	int		fd;
	char	buffer;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	while ((read(fd, &buffer, 1)))
	{
		write(1, &buffer, 1);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_puterr(2, ERROR_MISSING);
	else if (argc > 2)
		ft_puterr(2, ERROR_MANY);
	else
	{
		if (ft_display_file(argv[1]))
			return (0);
	}
	return (1);
}
