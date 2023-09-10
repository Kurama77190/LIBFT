/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:34:15 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/10 20:43:59 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%c", ft_tolower(argv[1][0]));
// }