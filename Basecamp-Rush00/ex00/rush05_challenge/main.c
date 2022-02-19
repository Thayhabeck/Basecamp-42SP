/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvieira <cvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:33:17 by cvieira           #+#    #+#             */
/*   Updated: 2022/02/05 22:33:23 by cvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		base10_conv(int start, int end, char *str);

int		ascii_num_to_integer(char *str);

int	base10_conv(int start, int end, char *str)
{
	int	num;
	int	base;

	num = 0;
	base = 1;
	while (end <= start)
	{
		num += (str[start] - '0') * base;
		base *= 10;
		start--;
	}
	return (num);
}

int	ascii_num_to_integer(char *str)
{
	int	signal;
	int	start;
	int	end;
	int	num;

	signal = 0;
	end = 0;
	while (str[end] == ' ' || str[end] == '-' || str[end] == '+')
	{
		if (str[end] == '-')
			signal++;
		end++;
	}
	start = end;
	while (str[start] >= '0' && str[start] <= '9')
	{
		start++;
	}
	start--;
	num = base10_conv(start, end, str);
	if (signal % 2)
	{
		num = -num;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 3)
		return (0);
	else
	{
		x = ascii_num_to_integer(argv[1]);
		y = ascii_num_to_integer(argv[2]);
		if (x <= 0 || y <= 0)
			return (0);
	}
	rush(x, y);
	return (0);
}
