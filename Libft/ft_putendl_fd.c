void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return; // on ne retourne rien car la fonction est void

    write(fd, s, ft_strlen(s));     // on écrit la chaîne
    write(fd, "\n", 1);             // puis un retour à la ligne
}
