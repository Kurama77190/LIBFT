/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:56:55 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/12 19:05:48 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*str;
	char		find;
	size_t		i;

	str = (char *)s;
	find = (char)c;
	i = 0;
	if (c == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == find)
			return (str + i);
		i++;
	}
	return (NULL);
}
