/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 23:16:25 by hben-laz          #+#    #+#             */
/*   Updated: 2023/08/03 23:32:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ascii[255] = {0};
	int	i;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			ascii[av[1][i]] = 1;
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			ascii[av[2][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if (ascii[av[1][i]] == 1)
			{
				write(1, &av[1][i], 1);
				ascii[av[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (ascii[av[2][i]] == 1)
			{
				write(1, &av[2][i], 1);
				ascii[av[2][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
