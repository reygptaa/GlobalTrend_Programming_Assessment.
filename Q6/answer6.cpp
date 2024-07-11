

  
  // this is the function that is returning the value of the factorial !
long long int factorial( long long int n)  
{ 
    if (n == 0 || n == 1) 
        return 1; 
    return n * factorial(n - 1); 
} 
  