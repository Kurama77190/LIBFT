/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:30:05 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/10 20:36:01 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	(void) argv;
// 	char	str[] = "";
// 	printf("%d\n", ft_str_is_alpha(str));
// }