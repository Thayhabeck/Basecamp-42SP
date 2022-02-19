/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvieira <cvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:54:08 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/05 23:34:49 by cvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TOP_LINE_CHAR ('-')
#define BOT_LINE_CHAR ('-')
#define START_TOP_HDR_CHAR ('o')
#define STOP_TOP_HDR_CHAR ('o')
#define START_BOT_HDR_CHAR ('o')
#define STOP_BOT_HDR_CHAR ('o')
#define START_COL_CHAR ('|')
#define STOP_COL_CHAR ('|')

void	ft_putchar(char c);

void	first_line(int line)
{
	ft_putchar(START_TOP_HDR_CHAR);
	while (line > 2)
	{
		ft_putchar(TOP_LINE_CHAR);
		line--;
	}
	if (line == 2)
	{
		ft_putchar(STOP_TOP_HDR_CHAR);
	}
	ft_putchar('\n');
}

void	middle_line(int line)
{
	ft_putchar(START_COL_CHAR);
	while (line > 2)
	{
		ft_putchar(' ');
		line--;
	}
	if (line == 2)
	{
		ft_putchar(STOP_COL_CHAR);
	}
	ft_putchar('\n');
}

void	last_line(int line)
{
	ft_putchar(START_BOT_HDR_CHAR);
	while (line > 2)
	{
		ft_putchar(BOT_LINE_CHAR);
		line--;
	}
	if (line == 2)
	{
		ft_putchar(STOP_BOT_HDR_CHAR);
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			first_line(x);
		}
		while (y > 1)
		{
			if (y == 2)
			{
				last_line(x);
			}
			else
			{
				middle_line(x);
			}
			y--;
		}
	}
}
