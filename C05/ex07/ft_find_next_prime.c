/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:01:05 by hben-laz          #+#    #+#             */
/*   Updated: 2023/08/02 16:44:33 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else
	{
		i = 2;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else
	{
		while (ft_is_prime(nb) != 1)
			nb++;
		return (nb);
	}
}
