#include <stdio.h>
#include <unistd.h>

int ft_isalpha(int character) 
{
	
		if((character < 'a' || character > 'z') &&  (character < 'A' || character > 'Z'))
		{	
	
			return (0) ; 
		} 


	
		return (1); 
}

