#include <stdio.h>

// a reviser fort le f n'es pas un pointeur tout ca 
// Fonction à appliquer à chaque caractère (modifie en place)
void f(unsigned int i, char *c) {
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

// Implémentation de ft_striteri
void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i = 0;

    if (!s || !f)
        return;

    while (s[i]) {
        f(i, &s[i]);
        i++;
    }
}

