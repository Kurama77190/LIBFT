/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:06:40 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/17 14:09:36 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*i;

	i = (char *)dest;
	d = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*i = *d;
		i++;
		d++;
		n--;
	}
	return (dest);
}
