/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdalgin <hdalgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:13:48 by hdalgin           #+#    #+#             */
/*   Updated: 2024/07/14 23:31:01 by hdalgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 16);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			tab[j] = str[i] - '0';
			j++;
		}
		else if (str[i] != ' ')
			return (NULL);
		i++;
	}
	if (j != 16)
		return (NULL);
	return (tab);
}
