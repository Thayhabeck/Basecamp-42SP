/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2_3_tower_result.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:57:13 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/13 20:15:02 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verf_2_3_col_row(int views[4][4], int grid[4][4], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (views[0][i] == 2 && views[1][i] == 3)
			grid[1][i] = 4;
		if (views[1][i] == 2 && views[0][i] == 3)
			grid[2][i] = 4;
		if (views[2][i] == 2 && views[3][i] == 3)
			grid[i][1] = 4;
		if (views[3][i] == 2 && views[2][i] == 3)
			grid[i][2] = 4;
		i++;
	}
	return ;
}
