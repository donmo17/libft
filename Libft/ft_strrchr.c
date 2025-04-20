#include <stdio.h>

char * ft_strrchr(const char * str, int searchedChar)
{
    size_t strlen = ft_strlen(str);
    
    // Vérifier si on cherche le caractère nul
    if (searchedChar == '\0')
        return (char*)&str[strlen];
    
    // Commencer par le dernier caractère valide (pas le \0)
    while(strlen--)
    {
        if(str[strlen] == (char)searchedChar)
            return (char*)&str[strlen];
    }
    
    return (NULL);
}

