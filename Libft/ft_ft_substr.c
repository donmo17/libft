#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    unsigned int i;
    char *smalloc;

    if (!s) 
        return NULL;

     smalloc = malloc(len + 1);
    if (!smalloc) // Vérifier si l'allocation a échoué
        return NULL;

    i = 0;
   while (s[start] && i < len) {
        smalloc[i] = s[start];
        start++;
        i++;
    }

    
    smalloc[i] = '\0';

    return (smalloc);
}

