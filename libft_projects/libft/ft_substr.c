/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:08:41 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:08:42 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = start ;
	j = 0;
	while (j < len && s[i])
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	if (ft_strlen(s) < start)
// 		len = 0;
// 	if (ft_strlen(s + start) < len)
// 		len = ft_strlen(s + start);
// 	str = malloc(sizeof(*s) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }
