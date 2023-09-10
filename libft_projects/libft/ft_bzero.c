/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:28:19 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/11 01:14:08 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	if (!s)
		return ;
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
