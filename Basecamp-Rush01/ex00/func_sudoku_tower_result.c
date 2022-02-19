/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_sudoku_tower_result.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:55:25 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/14 02:37:41 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_zero(int grid[4][4]);
void	clear_test(int aux[4][4]);
void	verif_sudokufull(int a[4][4], int g[4][4], int c, int k);
void	complete_loop(int g[4][4], int a[4][4], int i, int k);

void	verif_sudoku(int grid[4][4])
{
	int	aux[4][4];
	int	k;
	int	i;
	int	count_0;

	k = 0;
	while (k < 4)
	{
		k++;
		i = 0;
		clear_test(aux);
		while (i < 4)
		{
			complete_loop(grid, aux, i, k);
			i++;
		}
		count_0 = count_zero(aux);
		verif_sudokufull(aux, grid, count_0, k);
	}
}

void	verif_sudokufull(int a[4][4], int g[4][4], int c, int k)
{
	int	i;
	int	j;

	if (c == 1)
	{
		i = 0;
		j = 0;
		while (i < 4)
		{
			while (j < 4)
			{
				if (a[i][j] == 0)
					g[i][j] = k;
				j++;
			}
			j = 0;
			i++;
		}
	}
}

void	complete_loop(int g[4][4], int a[4][4], int i, int k)
{
	int	j;
	int	c;

	j = 0;
	c = 0;
	while (j < 4)
	{
		if (g[i][j] == k)
		{
			while (c < 4)
			{	
				a[i][c] = 8;
				a[c][j] = 8;
				c++;
			}
			c = 0;
		}
		j++;
	}
}
