#include <iostream>
using namespace std;
#include <math.h>  
// termina  en "1 es impar" y si es "0 es par"
int potencia(long int b,int n) 
{
	long int r = 1; 
	
    while (n > 0) 
    {
        if ((n % 2) != 0) 
        {	  
            r*= b;
        }
	
	
    b *= b;           
    n =n/2; 
	}
        
return r;

}


int main() 
{

    cout<< potencia(2,3) <<endl;
    


    return 0;
}

