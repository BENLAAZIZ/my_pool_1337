/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:42:10 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/18 09:30:34 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 0 || i == y - 1) && j == 1)
				ft_putchar('A');
			else if ((i == 0 || i == y - 1) && j == x)
				ft_putchar('C');
			else if (i != 0 && i < y - 1 && j != 1 && j < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
