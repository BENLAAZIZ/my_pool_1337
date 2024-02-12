/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:38:01 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/19 17:09:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (*(src + i) != '\0')
    {
		*(dest + i)  = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	main()
{
	char	c[] = "hamza";
	char	dest[] = "hichamhjhjhh";

	printf("dest : %s", ft_strcpy(dest, c));
	return 0;
}
