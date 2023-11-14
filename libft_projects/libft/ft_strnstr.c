/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:08:20 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:08:21 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (i + j < len && str[i + j] == find[j] && find[j] != '\0')
			j++;
		if (find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
