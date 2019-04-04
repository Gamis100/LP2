#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>

int * TA;
int * TB;

typedef long long myint;
typedef void(*fun_sort)(int* , int);

bool test_sort(fun_sort sort,const int *A,int n){
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	
	    clock_t t=clock();
	    sort(TA,n);
	    float time = float (clock()-t)/CLOCKS_PER_SEC;
	    
	    std::sort(TB , TB+n);
	    for(int i=0 ;i<n;i++)
	     if(TA[i]!= TB[i]) return false;
	     std::cout<<time<<" ";
	    return true ;
	    
}
void Bubble_Sort(int *A,int n){
	int temp;
	int j;
	 for (int i=1; i<n; i++){
	 
          for ( j=0 ; j<n - 1; j++){
		  
               if (A[j] > A[j+1]){
			   
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;}
				}}
}
void Selection_Sort(int *A, int n){
	int z=0,j,i,temp=0;
	for ( i=0; i<n; i++)
          for ( j=i+1 ; j<n ; j++)
          if(A[j]<A[z]);{
            z=j;
		   	
		  }
           
		     temp = A[i];
             A[i] = A[z];
             A[z] = temp;
		 z=i+1 ; 
		  
}



void Insertion_Sort(int *A, int n){
	int cont = 0;

	for (int i = 1; i < n; i++) {
		int y = A[i];
		int j = i - 1;

		while ((j >= 0) && (A[j] > y)) {
			A[j + 1] = A[j];
			j--;
			cont++;
		}

		A[j + 1] = y;
	}

	
}

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
   
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  
       
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  


int main (){
	int n=8;
	int array[n]={5,1,2,9,11,4,7,6};
	int *a = array;
	 
	Insertion_Sort(array,n);
	 


	for(int i=0;i<n;i++){
		std::wcout<<array[i]<<" ";
	}
	
	return 0;

}


