int ft_atoi(const char *str) {
    int i = 0;
    int sign = 1;
    long result = 0; // Utiliser un long pour éviter les débordements

    // Ignorer les espaces blancs
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f') {
        i++;
    }

    // Gérer les signes
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convertir les chiffres
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        
        // Vérifier les débordements
        if (result * sign > INT_MAX) {
            return INT_MAX;
        } else if (result * sign < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return (int)(result * sign);
}
