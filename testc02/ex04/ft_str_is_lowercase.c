/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:34:01 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/19 20:50:02 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'a' || *(str + i) > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;
	char	str[] = "mim";
	n = ft_str_is_lowercase(str);
	n = n + '0';
	write(1, "n = ", 4);
	write(1, &n, 1);
	return 0;    
}
