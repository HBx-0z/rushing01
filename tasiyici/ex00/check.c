/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdalgin <hdalgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:08:21 by hdalgin           #+#    #+#             */
/*   Updated: 2024/07/14 23:29:29 by hdalgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_col_up(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	if (pos / 4 != 3)
		return (0);
	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (tab[i][pos % 4] > max)
		{
			max = tab[i][pos % 4];
			count++;
		}
		i++;
	}
	if (count != entry[pos % 4])
		return (1);
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	if (pos % 4 != 3)
		return (0);
	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (tab[pos / 4][i] > max)
		{
			max = tab[pos / 4][i];
			count++;
		}
		i--;
	}
	if (count != entry[12 + pos / 4])
		return (1);
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_double(tab, pos, tab[pos / 4][pos % 4]) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	return (0);
}
