/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_zero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:48:54 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/13 13:40:57 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_zero(int grid[4][4])
{
	int	i;
	int	j;
	int	len;
	int	count_0;

	len = 4;
	i = 0;
	j = 0;
	count_0 = 0;
	while (i < len)
	{
		while (j < len)
		{
			if (grid[i][j] == 0)
				count_0++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count_0);
}
