/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:03:53 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:03:55 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_securite(size_t count, size_t size)
{
	size_t	size_max;

	size_max = LONG_MAX;
	if (count == 0 || size == 0)
		return (0);
	if (count > size_max / size || size > size_max / count)
		return (LONG_MAX);
	return (count * size);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;

	tab = malloc(ft_securite(count, size));
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, ft_securite(count, size));
	return (tab);
}
