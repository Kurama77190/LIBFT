/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:06:25 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:06:26 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		letter;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (n--)
	{
		if (str[i] == letter)
			return (str + i);
		i++;
	}
	return (NULL);
}
