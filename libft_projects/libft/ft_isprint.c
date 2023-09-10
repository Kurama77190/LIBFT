#include <unistd.h>


int ft_isprint(char *str)
{
    int i = 0;

    if (str[0] == '\0')
    {
        return (1);
    }
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
        	 i++;
        else
            return (0);
    }
    return (1);
}
