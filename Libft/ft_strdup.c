#include <stdlib.h>

char *ft_strdup(const char *source)
{
    int i = 0;
    int srclen;
    char *srcmalloc;

    srclen = ft_strlen(source);
    srcmalloc = malloc(srclen + 1);
    if (!srcmalloc)
        return (NULL);

    while (source[i])
    {
        srcmalloc[i] = source[i];
        i++;
    }
    srcmalloc[i] = '\0'; 

    return (srcmalloc);
}

