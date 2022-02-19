/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_verf_views.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:01:25 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/14 03:30:37 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	complete_colup(int views[4][4], int grid[4][4], int i, int j)
{
	int	c;
	int	len;
	int	verf;
	int	max;

	len = 4;
	c = 0;
	verf = 0;
	max = 0;
	if (i != 0)
		return (0);
	while (c < len)
	{
		if (grid[c][j] > max)
		{
			max = grid[c][j];
			verf++;
		}			
		c++;
	}
	if (views[i][j] != verf)
		return (1);
	return (0);
}

int	complete_coldown(int views[4][4], int grid[4][4], int i, int j)
{
	int	c;
	int	len;
	int	verf;
	int	max;

	len = 0;
	c = 3;
	verf = 0;
	max = 0;
	if (i != 1)
		return (0);
	while (c >= len)
	{
		if (grid[c][j] > max)
		{
			max = grid[c][j];
			verf++;
		}			
		c--;
	}
	if (views[i][j] != verf)
		return (1);
	return (0);
}

int	complete_rowleft(int views[4][4], int grid[4][4], int i, int j)
{
	int	c;
	int	len;
	int	verf;
	int	max;

	len = 4;
	c = 0;
	verf = 0;
	max = 0;
	if (i != 2)
		return (0);
	while (c < len)
	{
		if (grid[j][c] > max)
		{
			max = grid[j][c];
			verf++;
		}			
		c++;
	}
	if (views[i][j] != verf)
		return (1);
	return (0);
}

int	complete_rowri(int views[4][4], int grid[4][4], int i, int j)
{
	int	c;
	int	len;
	int	verf;
	int	max;

	len = 0;
	c = 3;
	verf = 0;
	max = 0;
	if (i != 3)
		return (0);
	while (c >= len)
	{
		if (grid[j][c] > max)
		{
			max = grid[j][c];
			verf++;
		}			
		c--;
	}
	if (views[i][j] != verf)
		return (1);
	return (0);
}

int	func_verf_views(int views[4][4], int grid[4][4])
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
			if (complete_colup(views, grid, i, j) == 1)
				return (1);
			if (complete_coldown(views, grid, i, j) == 1)
				return (1);
			if (complete_rowleft(views, grid, i, j) == 1)
				return (1);
			if (complete_rowri(views, grid, i, j) == 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
