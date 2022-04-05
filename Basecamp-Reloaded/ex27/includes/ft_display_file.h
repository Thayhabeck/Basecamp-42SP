/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:05:06 by thabeck-          #+#    #+#             */
/*   Updated: 2022/04/03 19:12:51 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define ERROR_MISSING "File name missing.\n"
# define ERROR_MANY "Too many arguments.\n"

int		ft_display_file(char *path);
void	ft_puterr(int fd, char *str);

#endif
