/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:06:46 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/17 14:11:16 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str;
	const char	*str2;

	i = 0;
	str = dst;
	str2 = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			str[len] = str2[len];
		}
	}
	else
	{
		while (len--)
		{
			str[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
