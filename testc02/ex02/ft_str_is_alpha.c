/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:20:02 by hben-laz          #+#    #+#             */
/*   Updated: 2023/07/19 19:17:49 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		if ((*(str + i) < 'a' && *(str + i) > 'Z')
			|| (*(str + i) < 'A' || *(str + i) > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main() {
    
  char c[] = "hhhhh";
  int n;
  n = ft_str_is_alpha(c);
  
  //*dest = *ft_strcpy(dest, c);
  
  n = n + '0';
  write(1, &n, 1);
    return 0;
}
