/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:49:57 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/11 23:27:59 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	str = dest;
	str2 = src;
	i = 0;
	if (n == 0)
		return (dest);
	if ((unsigned long)str < (unsigned long)str2)
	{
		while (n--)
		{
			str[i] = str2[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			str[n] = str2[n];
		}
	}
	return (dest);
}
