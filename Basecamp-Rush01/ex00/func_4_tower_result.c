/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_4_tower_result.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:25:46 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/13 19:54:26 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	complete_fun4(int grid[4][4], int i, int j)
{
	int	c;
	int	len;

	len = 4;
	c = 0;
	while (c < len)
	{
		if (i == 0)
			grid[c][j] = c + 1;
		if (i == 1)
			grid[c][j] = len - c;
		if (i == 2)
			grid[j][c] = c + 1;
		if (i == 3)
			grid[j][len - c] = c;
		c++;
	}
}

void	verf_4_col_row(int views[4][4], int grid[4][4])
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 4;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (views[i][j] == 4)
			{
				complete_fun4(grid, i, j);
			}
			j++;
		}
		i++;
	}
	return ;
}
