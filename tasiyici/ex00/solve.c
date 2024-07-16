/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdalgin <hdalgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:13:30 by hdalgin           #+#    #+#             */
/*   Updated: 2024/07/14 23:30:38 by hdalgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	solve(int tab[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 1;
	while (size <= 4)
	{
		tab[pos / 4][pos % 4] = size;
		if (check_case(tab, pos, entry) == 0)
		{
			if (solve(tab, entry, pos + 1) == 1)
				return (1);
		}
		tab[pos / 4][pos % 4] = 0;
		size++;
	}
	return (0);
}
