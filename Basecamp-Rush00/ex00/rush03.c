/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:54:08 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/07 15:00:17 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int ia, int ib, int a, int b)
{
	if (ib == 0 || ib == b - 1)
	{
		if (ia == 0)
			ft_putchar('A');
		else if (ia == a - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (ia == 0 || ia == a - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	index_y;
	int	index_x;

	index_y = 0;
	index_x = 0;
	if(x <= 0 || y<= 0)
		return ;
	while (index_y < y)
	{
		while (index_x < x)
		{
			print(index_x, index_y, x, y);
			index_x++;
		}
		write(1, "\n", 1);
		index_x = 0;
		index_y++;
	}
	index_y = 0;
}
