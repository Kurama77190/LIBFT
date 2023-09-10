#include <stdio.h>


int	ft_is_ascii(char *str)
{
    int i = 0;

    if (str[0] == '\0')
    {
        return (1);
    }
    while (str[i])
    {
        if (str[i] >= 0 && str[i] <= 127)
        	 i++;
        else
            return (0);
    }
    return (1);
}

// int main (int argc, char **argv)
// {

// }