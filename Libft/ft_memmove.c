#include <stdio.h>

void *memmove(void *destination, const void *source, size_t size) {
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)destination;
    s = (const unsigned char *)source;
    
    // Cas où source et destination sont identiques
    if (d == s)
        return destination;
        
    if (d < s) {
        // Copie de gauche à droite
        i = 0;
        while (i < size) {
            d[i] = s[i];
            i++;
        }
    } else {
        // Copie de droite à gauche
        i = size;
        while (i > 0) {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    
    return destination;
}
