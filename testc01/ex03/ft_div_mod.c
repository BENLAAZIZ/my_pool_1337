/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:25:15 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/18 18:38:44 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 15;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	div = div + '0';
	mod = mod + '0';
	write(1, "div =", 5);
	write(1, &div, 1);
	write(1, "mod =", 5);
	write(1, &mod, 1);
	return (0);
}
