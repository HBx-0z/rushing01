/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdalgin <hdalgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:09:21 by hdalgin           #+#    #+#             */
/*   Updated: 2024/07/16 10:05:16 by hdalgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

static void	init_tab(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*entry;

	if (ac != 2)
		return (write(1, "Error\n", 6));
	entry = get_numbers(av[1]);
	if (!entry)
		return (write(1, "Error\n", 6));
	init_tab(tab);
	if (solve(tab, entry, 0) == 1)
		print_solution(tab);
	else
		write(1, "Error\n", 6);
	free(entry);
	return (0);
}
