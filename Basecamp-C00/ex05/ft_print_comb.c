/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:02:34 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/04 04:58:52 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	count[3];

	count[0] = '/';
	count[1] = '0';
	count[2] = '1';
	while (++count[0] <= '7')
	{
		while (++count[1] <= '8')
		{
			while (++count[2] <= '9')
			{
				write(1, &count, 3);
				if (count[0] < '7')
					write(1, ", ", 2);
			}
		count[2] = (count[1]) + 1;
		}
	count[1] = (count[0]) + 1;
	count[2] = (count[1]) + 1;
	}
}
