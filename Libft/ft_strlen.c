#include "libft.h"

size_t	ft_strlen( const char *theString )
{
	size_t	i;

	i = 0;
	while (theString[i])
		i++;
	return (i);
}