#include <stdlib.h>
#include "libft.h" 

char *majModulo(unsigned int, char c )
	
{	while( i % 2 == 0 && c >= a &&  c <= 'z' )
	{
		c -= 32 ; 	

	} 
	return c ; 
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

    if (!s || !f)
        return NULL;

	size_t sLen;
	size_t i;
	char *sDest ; 
	sLen = ft_strlen(s);
	if(!sDest = malloc((sLen + 1)  * sizeof(char)))
		return (NULL);
	while(sLen > i )
	{
		sDest[i] = f (i, (s[i]) );
		i++ ;

	} 
		sDest = '\0' ;
}
