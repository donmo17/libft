#include <stdio.h>
#include <unistd.h>

int ft_alnum(int character)
{
    if ((character >= '0' && character <= '9') || 
        (character >= 'A' && character <= 'Z') || 
        (character >= 'a' && character <= 'z'))
    {
        return (1);
    }
    return (0);

}
