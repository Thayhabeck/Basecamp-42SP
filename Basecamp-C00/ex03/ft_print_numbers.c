/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 02:00:01 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/03 03:24:20 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		number;
	char	character;

	number = 48;
	while (number <= 57)
	{
		character = number;
		write(1, &character, 1);
		number++;
	}
}
