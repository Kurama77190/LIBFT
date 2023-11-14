/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:07:16 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/14 04:07:17 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nombremot(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	ft_lenmot(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

void	ft_ajoutdesmots(char **tab, char *str, int i, char c)
{
	int	j;
	int	k;

	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] == c)
			i++;
		if (str[i])
		{
			tab[j] = malloc((sizeof(char)) * (ft_lenmot(str + i, c) + 1));
			if (!tab[j])
				ft_malloc_error(tab);
			while (str[i] && str[i] != c)
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
	tab[j] = (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	tab = malloc(sizeof(char *) * (ft_nombremot(str, c) + 1));
	if (!tab)
		return (NULL);
	ft_ajoutdesmots(tab, str, i, c);
	return (tab);
}
