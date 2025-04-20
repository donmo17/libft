void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    size_t i = 0;
    unsigned char *memory = (unsigned char *)memoryBlock;
    unsigned char character = (unsigned char)searchedChar;

    while (i < size)
    {
        if (memory[i] == character)
            return ((void *)&memory[i]);
        i++;
    }
    return NULL;
}

