/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2_1_tower_result.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:48:53 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/14 03:27:17 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verf_2_1_col_row(int views[4][4], int grid[4][4], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (views[0][i] == 2 && views[1][i] == 1)
			grid[0][i] = 3;
		if (views[1][i] == 2 && views[0][i] == 1)
			grid[3][i] = 3;
		if (views[2][i] == 2 && views[3][i] == 1)
			grid[i][0] = 3;
		if (views[3][i] == 2 && views[2][i] == 1)
			grid[i][3] = 3;
		i++;
	}
	return ;
}
