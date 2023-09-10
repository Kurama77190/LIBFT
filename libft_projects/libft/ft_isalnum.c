/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:28:43 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/11 01:46:03 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	(void) argv;
// 	char	str[] = "123456789";
//     char    str2[] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
//     char    str3[] = "abcdefghiklmnopqrstuvwxyz";
//     char    str4[] = "";
//     char    str5[] = " ^&#$&*";
// 	printf("%d\n", ft_is_alphanumerique(str));
//     printf("%d\n", ft_is_alphanumerique(str2));
//     printf("%d\n", ft_is_alphanumerique(str3));
//     printf("%d\n", ft_is_alphanumerique(str4));
//     printf("%d\n", ft_is_alphanumerique(str5));
// }