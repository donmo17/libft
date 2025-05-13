#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;
	size_t			i;

	i = 0;
	s1cpy = (unsigned char *) s1;
	s2cpy = (unsigned char *) s2;
	while (i < n)
	{
		if (s1cpy[i] == s2cpy[i])
		{
			i++;
		}
		else
		{
			if (s1cpy[i] < s2cpy[i])
				return (-1);
			else
				return (1);
		}
	}
	return (0);
}