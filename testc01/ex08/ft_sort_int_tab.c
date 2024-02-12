/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:51:57 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/18 23:34:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min;

	i = 0;
	while (i < size - 1)
	{
		j = 1 + i;
		while (j < size)
		{
			min = *(tab + i);
			if (min > *(tab + j))
			{
				*(tab + i) = *(tab + j);
				*(tab + j) = min;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int size = 5;
	int tab[] = {5, 8, 3, 3, 0};
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
		{
			tab[i] = tab[i] + '0';
			write(1, (tab + i), 1);
			write(1, " ", 1);
			i++;
		}
}
