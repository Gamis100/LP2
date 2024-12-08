#include <iostream>
using namespace std;

void swap(int *i, int *j)
{
    int t = *i;
    *i = *j;
    *j = t;
}

void bubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
    cout << endl;
}

int main()
{
    int M[] = {9, 8, 7, 5,2,5,6,4};
    int n = sizeof(M) / sizeof(M[0]);
    cout << "Lista Dada: " << endl;
    print(M, n);
    bubbleSort(M, n);
    cout << "Lista Ordenada: " << endl;
    print(M, n);
    return 0;
}
