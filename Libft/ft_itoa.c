int ft_countlen(int n)
{
    int i = 0;
    
    if (n == 0)
        return 1;
    if (n < 0)
        n *= -1;
    while (n != 0) {
        n /= 10;
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    size_t count;
    char *destN;
    long nb; // Pour éviter les problèmes avec INT_MIN
    
    count = ft_countlen(n);
    // place pour le signe '-'
    if (n < 0)
        count++;
    destN = (char *)malloc((count + 1) * sizeof(char));
    if (!destN)
        return (NULL);
    
    // Ajouter le caractère null à la fin
    destN[count] = '\0';
    
    // Conversion en long pour éviter les problèmes avec INT_MIN
    nb = n;
    if (nb < 0) {
        destN[0] = '-';
        nb *= -1;
    }
    
    // Gérer le cas où n = 0
    if (nb == 0)
        destN[0] = '0';
    
    // On remplit à partir de la fin
    while (nb > 0) {
        count--;
        destN[count] = (nb % 10) + '0';
        nb /= 10;
    }
    
    return destN;
}
