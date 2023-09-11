/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:33:59 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/11 19:34:09 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	(void) argv;
// 	unsigned int n = 3;
// 	char str[] = "1111";
// 	char str2[] = "";
// 	printf("%d\n", ft_strncmp(str, str2, n));
// 	printf("%d\n", strncmp(str, str2, n));

// 	unsigned int n = atoi(argv[3]);
// 	printf("%d\n", ft_strncmp(argv[1], argv[2], n));
// 	printf("%d\n", strncmp(argv[1], argv[2], n));
// }
