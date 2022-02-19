/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_ten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:46:14 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/14 02:28:31 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_arr(int *test_arr);

int	count_ten_row(int grid[4][4], int arr[8], int k)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[k] += grid[i][j];
			j++;
		}
		k++;
		i++;
	}
	return (k);
}

int	count_ten_col(int grid[4][4], int arr[8], int k)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[k] += grid[j][i];
			j++;
		}
		k++;
		i++;
	}
	return (k);
}

int	count_ten(int grid[4][4])
{
	int	k;
	int	test_arr[8];
	int	count_10;

	clear_arr(test_arr);
	k = 0;
	count_10 = 0;
	count_ten_row(grid, test_arr, k);
	k = 5;
	count_ten_col(grid, test_arr, k);
	k = 0;
	while (k < 8)
	{
		if (test_arr[k] != 10)
		{
			count_10++;
		}
		k++;
	}
	return (count_10);
}

void	clear_arr(int *test_arr)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		test_arr[i] = 0;
		i++;
	}
}
