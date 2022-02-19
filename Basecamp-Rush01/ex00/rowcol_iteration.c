/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rowcol_iteration.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:34:31 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/14 02:17:18 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	complete_row(int a[4], int g[4][4], int t, int i)
{
	int	j;

	j = 0;
	if (t > 9)
		return ;
	while (j < 4)
	{
		if (a[j] == 0)
			g[i][j] = 10 - t;
		a[j] = 0;
		j++;
	}
}

void	complete_col(int a[4], int g[4][4], int t, int i)
{
	int	j;

	j = 0;
	if (t > 9)
		return ;
	while (j < 4)
	{
		if (a[j] == 0)
			g[j][i] = 10 - t;
		a[j] = 0;
		j++;
	}
}

void	row_iteration(int array[4], int grid[4][4])
{
	int	temp;
	int	i;
	int	j;
	int	cont_0;

	i = -1;
	while (++i < 4)
	{
		temp = 0;
		j = -1;
		cont_0 = 0;
		while (++j < 4)
		{
			array[j] = grid[i][j];
			temp += grid[i][j];
			if (grid[i][j] == 0)
				cont_0++;
		}
		if (cont_0 == 1)
		{
			complete_row(array, grid, temp, i);
		}
	}
}

void	col_iteration(int array[4], int grid[4][4])
{
	int	temp;
	int	i;
	int	j;
	int	cont_0;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		temp = 0;
		cont_0 = 0;
		while (++j < 4)
		{
			array[j] = grid[j][i];
			temp += grid[j][i];
			if (grid[j][i] == 0)
				cont_0++;
		}
		if (cont_0 == 1)
		{
			complete_col(array, grid, temp, i);
		}
	}
}

void	rowcol_iteration(int grid[4][4])
{
	int	array[4];

	row_iteration (array, grid);
	col_iteration (array, grid);
}
