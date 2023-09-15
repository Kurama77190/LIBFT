/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:28:04 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/14 10:01:23 by sben-tay         ###   ########.fr       */
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
