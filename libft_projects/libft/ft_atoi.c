#include <string.h>
#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	int i = 0;
	int nb = 0;
	int sign = 1;
	while ((nptr[i] > 8 && nptr[i] < 14 ) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	else
	{
		return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}

// int main (int argc, char **argv)
// {
// 	(void) argc;
// 	printf("mon tableau de char est : %s\n", argv[1]);
// 	printf("mon int retour est :%d\n", ft_atoi(argv[1]));
// }