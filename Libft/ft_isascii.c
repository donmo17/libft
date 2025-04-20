 #include <stdio.h>
#include <unistd.h>

int ft_isascii(int character)
{
	if(character < 0 || character > 127 ) 
		return (0) ; 
	return (1) ;	
}

