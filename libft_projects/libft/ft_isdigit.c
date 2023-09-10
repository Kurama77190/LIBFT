/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:25:47 by sben-tay          #+#    #+#             */
/*   Updated: 2023/09/10 20:35:27 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	(void) argv;
// 	char	str[] = "123456789a";
// 	printf("%d\n", ft_is_digit(str));
// }