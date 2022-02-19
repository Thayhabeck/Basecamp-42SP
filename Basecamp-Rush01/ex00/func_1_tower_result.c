/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_1_tower_result.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:06:58 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/13 18:29:59 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verf_1_col_row(int views[4][4], int grid[4][4])
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 4;
	while (i++ < len)
	{
		j = 0;
		while (j++ < len)
		{
			if (views[i][j] == 1)
			{
				if (i == 0)
					grid[0][j] = 4;
				if (i == 1)
					grid[3][j] = 4;
				if (i == 2)
					grid[j][0] = 4;
				if (i == 3)
					grid[j][3] = 4;
			}
		}
	}
	return ;
}
