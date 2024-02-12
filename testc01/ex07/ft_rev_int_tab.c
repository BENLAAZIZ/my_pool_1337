/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:11:25 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/18 22:15:13 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		t = *(tab + i);
		*(tab + i) = *(tab + j);
		*(tab + j) = t;
		i++;
		j--;
	}
}

int	main(void)
{
	int	tab[] = {5, 4, 3, 2, 1};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		tab[i] = tab[i] + '0';
		write(1, &tab[i], 1);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
