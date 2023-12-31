/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:03:45 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/17 15:54:26 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	unsigned char str[] = "12345";
// 	unsigned char str2[] = "12345";

// 	// int i = 123456789;
// 	ft_bzero(str, 0);
// 	bzero(str2, 4);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// }
