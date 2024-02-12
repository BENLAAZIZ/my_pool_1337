/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:06:04 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/26 18:09:59 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*(to_find) == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
        j = 0;
		while ((*(str + i + j) == *(to_find + j)) && *(to_find + j) != '\0')
			j++;
		if (*(to_find + j) == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
