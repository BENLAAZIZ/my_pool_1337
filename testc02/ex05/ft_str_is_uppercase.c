/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:17:08 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/19 22:30:38 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'A' || *(str + i) > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	int n;
	char str[] = "HHHHHHH";

	n = ft_str_is_uppercase(str);
	n = n + '0';
	write(1, &n, 1);
	return (0);
}
