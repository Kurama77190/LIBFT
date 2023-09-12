/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:02:47 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/12 17:44:39 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	if (str[i] == str2[i])
		return (0);
	else
		return ((unsigned char *)str + i - (unsigned char *)str2 + i);
}
