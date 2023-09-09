#include <string.h>
#include <stdio.h>


int ft_strlen (char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	printf("La taille de mon string est de %d", ft_strlen(argv[1]));
// }