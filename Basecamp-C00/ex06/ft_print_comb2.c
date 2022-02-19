/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:00:03 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/07 21:09:04 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		number_one;
	int		number_two;
	char	number[5];

	number_one = 0;
	number_two = 1;
	number[2] = ' ';
	while (number_one <= 99)
	{
		while (number_two <= 99)
		{
			number[0] = (number_one / 10) + '0';
			number[1] = (number_one % 10) + '0';
			number[3] = (number_two / 10) + '0';
			number[4] = (number_two % 10) + '0';
			write(1, &number, 5);
			if (!(number[0] == '9' && number[1] == '8'))
				write(1, ", ", 2);
			number_two++;
		}
		number_one++;
		number_two = number_one + 1;
	}
}
