#include <stdio.h>

int     ft_is_digit(char *str)
{
    int i = 0;

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