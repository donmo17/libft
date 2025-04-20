#include <unistd.h>
#include <stddef.h> // pour size_t

void ft_putstr_fd(char *s, int fd)
{
    size_t sLen;

    if (!s) // Sécurité : vérifier si le pointeur n'est pas NULL
        return;

    sLen = ft_strlen(s);     
    write(fd, s, sLen); 
}

