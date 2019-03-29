#include <iostream>

using namespace std;

pow_re(int b, int n)
{
    if(n==0)
    {
        return 1;
    }
    
    else
    {
        int aux= pow_re(b, n/2);
        if(n%2==0)
        {
            return aux*aux;
        }
        else
        {
            return b * aux * aux;
        }
    }
}
int main()
{
    /* code */
    cout<<"el resultado de: "<<pow_re(2,4)<<endl;
    return 0;
}
