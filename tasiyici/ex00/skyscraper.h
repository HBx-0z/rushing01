/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdalgin <hdalgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:33:27 by hdalgin           #+#    #+#             */
/*   Updated: 2024/07/14 23:33:33 by hdalgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

# include <unistd.h>
# include <stdlib.h>

# define SIZE 4

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		check_double(int tab[4][4], int pos, int num);
int		check_col_up(int tab[4][4], int pos, int entry[16]);
int		check_row_right(int tab[4][4], int pos, int entry[16]);
int		check_case(int tab[4][4], int pos, int entry[16]);
int		solve(int tab[4][4], int entry[16], int pos);
int		ft_atoi(char *str);
int		*get_numbers(char *str);
void	print_solution(int tab[4][4]);

#endif
