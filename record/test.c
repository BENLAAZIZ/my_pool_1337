/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:35:23 by hben-laz          #+#    #+#             */
/*   Updated: 2023/08/01 15:49:57 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if ((ac % 2) != 0)
		printf("error\n");
	else
	{
		i = (ac - 1) / 2;
		while (i >= 0)
		{
		  j = 0;
		  while (av[i][j] != '\0')
		  {
			  write(1, &av[i][j], 1);
			  j++;
		  }
		  write(1, "\t", 1);
		  i--;
		}
		i = ac / 2;
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\t", 1);
			i++;
		}
	}
	return (0);
}
