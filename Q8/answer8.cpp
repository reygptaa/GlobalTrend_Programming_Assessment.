

 
int gcd(int a, int b) 
{ 
	int ans = min(a, b); 
	while ( ans > 0 ) 
    { 
		if ( (a % ans == 0) && (b % ans == 0) ) 
        { 
			break; 
		} 
		ans--; 
	} 

	return ans; 
} 



