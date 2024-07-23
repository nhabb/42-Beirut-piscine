/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skreik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:42:59 by skreik            #+#    #+#             */
/*   Updated: 2024/02/19 09:44:19 by skreik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print_row(char left, char middle, char right, int length);

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	return (0);
}
