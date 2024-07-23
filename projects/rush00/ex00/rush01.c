/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skreik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:18:54 by skreik            #+#    #+#             */
/*   Updated: 2024/02/19 10:21:52 by skreik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	print_row(char left, char middle, char right, int length)
{
	int	i;

	ft_putchar(left);
	i = 1;
	while (i < length - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (length > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_row('/', '*', '\\', x);
	i = 1;
	while (i < y - 1)
	{
		print_row('*', ' ', '*', x);
		i++;
	}
	if (y > 1)
	{
		print_row('\\', '*', '/', x);
	}
}