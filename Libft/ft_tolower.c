#include <stdio.h>

int	ft_tolower( int character )
{
	 if (character >= 'A' && character <= 'Z') {
        character = character + 32;
    }
    return character;
}
