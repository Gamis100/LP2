#include <iostream>

template<class T>        
Matrix<T>::Matrix(size_t m , size_t n)  //Constructor
{
    rows = m;
    cols = n;
 
    a = new T*[rows]; /
 
    for(int i = 0; i< rows; i++)    
    {
        a[i] = new T[cols];
    }
  delete []a;
}

template <class T>
Matrix<T>:: ~Matrix()  //Destructor
{
  delete[]a;
}

template <class T>
void Matrix<T>::initMatrix(T **t)       
     
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j < cols; j++)
        {
            a[i][j] = t[i][j];
        }
    }
 
}

template <class T>
Matrix<T> operator +(Matrix<T> x, Matrix<T> y)  
{
    while(x.rows == y.rows || x.cols == y.cols)
    {
    
      Matrix<T> sum(x.rows, x.cols);
   
      int i,j;
   
      for(i=0; i < x.rows; i++)
        {
          for(j=0; j < x.cols; j++)
            {
              sum.a[i][j] = x.a[i][j] + y.a[i][j];
            }
        }
         
      return sum;
    }
}
