/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:56:53 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/14 03:42:06 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		count_ten(int grid[4][4]);
int		count_zero(int grid[4][4]);
void	ft_putchar(int views[4][4]);
void	clear_test(int aux[4][4]);
void	rowcol_iteration(int grid[4][4]);
void	verf_1_col_row(int views[4][4], int grid[4][4]);
void	verf_4_col_row(int views[4][4], int grid[4][4], int len);
void	verf_2_1_col_row(int views[4][4], int grid[4][4], int len);
void	verf_2_3_col_row(int views[4][4], int grid[4][4], int len);
void	verif_sudoku(int grid[4][4]);
void 	copy_table(int grid[4][4], int copy_grid[4][4]);
void	kick_possible_n(int grid[4][4], int k);
int		func_verf_views(int views[4][4], int grid[4][4]);
void	result(int v[4][4], int g[4][4], int x_g[4][4]);

void	tower_result(int views[4][4])
{
	int grid[4][4];
	int len;	
	int xerox_grid[4][4];

	len = 4;
	copy_table(grid, xerox_grid);
	clear_test(grid); 
	verf_1_col_row(views, grid);
	verf_4_col_row(views, grid, len);
	verf_2_1_col_row(views, grid, len);
	verf_2_3_col_row(views, grid, len);
	verif_sudoku(grid);
	rowcol_iteration(grid);
	result(views, grid, xerox_grid);
}

void	result(int v[4][4], int g[4][4], int x_g[4][4])
{
	int	l;
	int	m;
	int	n;
	int	func2;
	int	i;
	int	j;
	
	l = 0;
	m = 0;
	n = 0;
	func2 = 1;
	i = 1;
	j = 0;
	while (n < 5)
	{
		while(m < 5)
		{
			while(l < 5)
			{
				while(j < 5)
				{
					while( i < 5)
					{
						copy_table(g, x_g);
						kick_possible_n(x_g, i);
						kick_possible_n(x_g, j);
						kick_possible_n(x_g, l);
						kick_possible_n(x_g, m);						
						kick_possible_n(x_g, n);
						verif_sudoku(x_g);
						rowcol_iteration(x_g);
						verif_sudoku(x_g);
						rowcol_iteration(x_g);
						verif_sudoku(x_g);
						rowcol_iteration(x_g);
						verif_sudoku(x_g);
						rowcol_iteration(x_g);
						func2 = func_verf_views(v,x_g); 
						if (func2 == 0)
						{					
							ft_putchar(x_g);
							return;
						}
						i++;		
					}
					i = 0;
					j++;	
				}
				j = 0;
				l++;
			}
			l = 0;
			m++;
		}
		m = 0;
		n++;
	}
	
}
