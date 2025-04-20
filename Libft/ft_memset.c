#include <stddef.h>

void *ft_memset(void *pointer, int value, size_t count)
{
    size_t i;
    unsigned char *pointercpy;

    pointercpy = (unsigned char *)pointer;
    i = 0;
    while (i < count)
    {
        pointercpy[i] = (unsigned char)value;
        i++;
    }
    return (pointer);
}

// unsigned pour obliger a avoir que des valeurs positives 


