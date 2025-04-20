#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t srclen;
	size_t i ; 
	
	destlen = ft_strlen(dest);
	srclen  = ft_strlen(src);
	i = 0 ; 

	if(destlen ==  size) 
		return (size + srclen);

	while(src[i] && destlen + i + 1  < size  )
	{
		dest[destlen + i] = src[i];
		i++;
	}

	    dest[destlen + i] = '\0';
	    return (destlen + srclen);
}
