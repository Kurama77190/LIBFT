#include <stdio.h>

char ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%c", ft_tolower(argv[1][0]));
// }