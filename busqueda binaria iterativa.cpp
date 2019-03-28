#include <iostream> 
using  namespace  std;
int busqueda_binaria (int arr[], int l, int r, int x) 
{ 
  while (l <= r) 
  { 
    int m = l + (r-l)/2; 
    if (arr[m] == x)  
        return m;   
  // Si x es mayor, ignora la mitad izquierda
    if (arr[m] < x)  
        l = m + 1;  
  
// Si x es más pequeño, ignora la mitad derecha 
    else 
         r = m - 1;  
  } 
  
 
// si llegamos aquí, entonces el elemento no estaba presente
  return -1;  
} 
  
int main(void) 
{ 
   int arr[] = {2, 3, 4, 10, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int x = 10; 
   int result = busqueda_binaria (arr, 0, n-1, x); 
   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", result); 
   return 0; 
} 
