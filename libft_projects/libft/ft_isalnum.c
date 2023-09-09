#include <stdio.h>

int ft_is_alphanumerique(char *str)
{
    int i = 0;

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