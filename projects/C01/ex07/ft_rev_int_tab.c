/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:11:30 by nhaber            #+#    #+#             */
/*   Updated: 2024/02/19 22:15:14 by nhaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;	
	int	tmp;

	counter = 0;
	while (counter < (size / 2))
	{
		tmp = tab[counter];
		tab [counter] = tab [size - 1 - counter];
		tab [size - 1 - counter] = tmp;
		counter++;
	}
}
