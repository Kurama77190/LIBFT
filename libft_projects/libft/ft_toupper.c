#include <stdio.h>

char ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%c", ft_toupper(argv[1][0]));
// }