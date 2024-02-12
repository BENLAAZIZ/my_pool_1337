/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:44:39 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/18 18:55:35 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a / *b;
	*b = *a % *b;
	*a = t;
}

int	main(void)
{
	int	a;
	int	b;
	int	i;
	int	j;

	a = 8;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	i = a + '0';
	j = b + '0';
	write(1, "div a =", 7);
	write(1, &i, 1);
	write(1, "\n", 1);
	write(1, "mod b =", 7);
	write(1, &j, 1);
	return (0);
}
