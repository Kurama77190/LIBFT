/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:07:06 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/12 19:13:37 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	char		find;
	size_t		i;

	str = (char *)s;
	find = (char)c;
	i = ft_strlen(str);
	if (c == '\0')
		return (str + ft_strlen(str));
	while (i--)
	{
		if (str[i] == find)
			return (str + i);
	}
	return (NULL);
}
