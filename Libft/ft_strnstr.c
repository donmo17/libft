char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;

    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            j++;
        }
        if (needle[j] == '\0') // <- Vérifie ici si on est arrivé à la fin de needle
            return (char *)&haystack[i];
        i++;
    }
    return NULL;
}

