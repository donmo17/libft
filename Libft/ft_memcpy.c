#include <stdio.h>


void *ft_memcpy(void * destination, const void * source, size_t size)
{
	 if (!destination || !source)
        return NULL;
	size_t i;
	i = 0 ; 

	unsigned char * destcopy = (unsigned char *)destination;
	unsigned char * srcopy = (unsigned char *) source ;

	while(size > i )
	{
		destcopy[i] = srcopy[i] ; 
		i++; 
	}
	return(destination); 
}
