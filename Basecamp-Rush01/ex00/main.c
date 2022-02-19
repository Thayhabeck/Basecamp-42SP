/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:53:11 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/14 03:29:11 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		views_test(int views[4][4]);
int		initial_test(char *argv[]);
void	extract_rowcol(char *str, int views[4][4]);
void	tower_result(int views[4][4]);
int		argument_test(int argc);

int	main(int argc, char *argv[])
{
	int	test;
	int	views[4][4];

	test = argument_test(argc);
	if (test == 1)
		return (0);
	test = initial_test(argv);
	if (test == 1)
		return (0);
	extract_rowcol(argv[1], views);
	test = views_test(views);
	if (test == 1)
		return (0);
	tower_result(views);
}
