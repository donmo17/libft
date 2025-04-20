#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t elementCount, size_t elementSize) {
    // Calcule la taille totale à allouer
    size_t totalSize = elementCount * elementSize;

    // Alloue de la mémoire
    void *array = malloc(totalSize);
    if (!array) {
        return NULL; // Vérifie si malloc a réussi
    }

    // Initialise la mémoire à zéro
   ft_ memset(array, 0, totalSize);

    return array;
}

 
