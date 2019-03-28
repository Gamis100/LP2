#include <iostream> 
using namespace  std;
bool binaria_recursiva(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
          // Si el elemento está presente en el medio mismo.
        if (arr[mid] == x)  return mid; 
         // Si el elemento es más pequeño que el medio, entonces solo puede estar presente
         // en el subarreglo izquierdo
        if (arr[mid] > x) return binaria_recursiva(arr, l, mid-1, x); 
  
        // El elemento solo puede estar presente en el subarreglo derecho
        return binaria_recursiva(arr, mid+1, r, x); 
   } 
  
   
       // Llegamos aquí cuando el elemento no está presente en la matriz
   return -1; 
} 
  
int main(void) 
{ 
   int arr[] = {2, 3, 4, 10, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int x = 10; 
   int result = binaria_recursiva(arr, 0, n-1, x); 
   (result == -1)? printf("El elemento no esta presente en la matriz") 
                 : printf("El elemento esta presente en el indice% d ", result); 
   return 0; 
} 
