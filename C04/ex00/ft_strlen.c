/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:32:50 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/29 15:38:50 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str+ i) != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	char str[] = "hamza";
	printf("%d", ft_strlen(str));
	return (0);
}*/
