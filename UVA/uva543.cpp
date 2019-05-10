#include<iostream>
#define max 1000000
using namespace std;

int main()
{
     bool array[max+1];
    
    
    long n;
    
    for(int i=2;i< 500000;i++)
    {
    if(array[i]==0)
            {
    int j=2;
    while((i*j)<=max)           
                               {
                            array[i*j]=1;                                       
                             j++;           
                             }
            }   
     }
    
    while(cin>>n)
    {
    
                 if(n==0) break;
    for(long x=3;x<=n;x+=2)
         if( array[x]==0 && array[n-x]==0)
          {  
           cout<<n<<" = "<<x<<" + "<<n-x<<endl; x=(n+1); 
        
            }
   
    }
  
    return 0;
}


