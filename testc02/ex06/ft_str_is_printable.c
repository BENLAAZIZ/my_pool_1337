/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:14:27 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/19 23:40:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 32 || *(str + i) >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;
	char	str[] = "\n";

	n = ft_str_is_printable(str);
	n = n + '0';
	write(1, &n, 1);
	return (0);
}
