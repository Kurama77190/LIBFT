/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:06:31 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:06:32 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (i < n - 1 && str[i] == str2[i])
	{
		i++;
	}
	if (str[i] == str2[i])
		return (0);
	else
		return (str[i] - str2[i]);
}
