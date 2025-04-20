

char **ft_split(char const *s, char c)
{
	char slen ;
	int wordCounter ;
	int wordlen;
	int i;
	int j;  
	char **wordTab;
	int letterCounter ; 

	slen = ft_strlen(s) ;
	wordCounter = 0; 
	wordlen = 0 ;
	letterCounter = 0 ; 

	while(i < slen)
	{
		if(s[i] != c && (s[i] == 0 || s[i-1] == c))
		{
			wordCounter ++ ;	
		}
	i++ ; 
	}

	wordTab = char(**)malloc(wordCounter * sizeof(char) ); 
	if(!wordTab)
		return (0) ;
	i = 0 ; 
	while wordlen > i )
	{
		
		
		
	}
	
	





}
