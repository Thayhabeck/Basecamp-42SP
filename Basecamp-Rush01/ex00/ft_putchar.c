/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:10:35 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/13 14:39:35 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar_error(void)
{
	write(1, "Error\n", 7);
}

void	ft_putchar(int grid[4][4])
{
	int	j;
	int	k;
	int	n;

	j = 0;
	while (j < 4)
	{
		k = 0;
		while (k < 4)
		{
			n = grid[j][k] + 48;
			write (1, &n, 1);
			write (1, " ", 1);
			k++;
		}
		write (1, "\n", 1);
		j++;
	}
}
