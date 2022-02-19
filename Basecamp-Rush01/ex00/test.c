/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:09:59 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/14 02:15:23 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar_error(void);

int	initial_test(char *argv[])
{
	int	size;

	size = 0;
	while (argv[1][size] != '\0')
	{
		if (argv[1][size] < '1' && argv[1][size] != ' ')
		{
			putchar_error();
			return (1);
		}
		if (argv[1][size] > '4' && argv[1][size] != ' ')
		{
			putchar_error();
			return (1);
		}
		size++;
	}
	if (size != 31)
	{
		putchar_error();
		return (1);
	}
	return (0);
}

int	argument_test(int argc)
{
	if (argc != 2)
	{
		putchar_error();
		return (1);
	}
	return (0);
}

int	views_test(int views[4][4])
{
	int	v_sum;
	int	h_sum;
	int	c;

	c = 0;
	while (c < 4)
	{
		v_sum = views[0][c] + views[1][c];
		h_sum = views [2][c] + views [3][c];
		if (v_sum > 5 || v_sum < 3 || h_sum > 5 || h_sum < 3)
		{
			putchar_error();
			return (1);
		}
		c++;
	}
	return (0);
}
