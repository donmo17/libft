#include <stdio.h>

char *ft_ strchr( const char * str, int searchedChar )
{
	int i ; 
	i = 0 ; 
	while(str[i])
	{
		if(str[i] == searchedChar)
		{

			return((char *)&str[i])
		
		}
		i++ ;
		
	}	
	if (searchedChar == '\0') 
		return((char *)&str[i]) ; 

	return (NULL) ; 
}

