// #include <stdio.h>
// #include <ctype.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while(str[i])
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
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
// 	char	str[] = "";
// 	printf("%d\n", ft_str_is_alpha(str));
// }