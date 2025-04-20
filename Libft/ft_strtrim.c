#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *s1malloc;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	s1malloc = malloc((end - start + 1));
	if (!s1malloc)
		return (NULL);

	i = 0;
	while (start < end)
		s1malloc[i++] = s1[start++];
	s1malloc[i] = '\0';

	return (s1malloc);
}

