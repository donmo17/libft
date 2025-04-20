int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t i;
	i = 0 ; 

	 unsigned char *p1 = ( unsigned char *)pointer1 ;
	 unsigned char *p2 = ( unsigned char *)pointer2; 
	
	while(i < size)
	{
		if(p1[i] != p2[i])
			return (p1[i] -p2[i]) ; 
	i++ ; 
	}
	return (0) ; 
	
	
}

