/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:45:54 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/25 23:14:13 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, (int)s1[j]))
		j--;
	dest = ft_substr(s1, i, j - i + 1);
	return (dest);
}
