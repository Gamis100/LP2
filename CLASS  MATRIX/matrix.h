#ifndef MATRIX_H
#define MATRIX_H
using namespace std;
#include <iostream>


template <class T>

class Matrix 
{
  private:
    T **a;
    size_t rows, cols;
      
  public:
      
    Matrix(size_t p_m, size_t p_n);  
    Matrix(const Matrix<T>& m);
    ~Matrix();  // Destructor 
    
    void initMatrix(T **t);
    void inverMat(T **a);
      
    T deterMat();

    friend std::ostream& operator << (std::ostream &os, Matrix<T> &t); //sobrecarga del operador 
    friend std::istream& operator >> (std::istream &os, Matrix<T> &t); //sobrecarga del operador 

    friend Matrix<T> operator + (Matrix<T> x, Matrix<T> y); 
    friend Matrix<T> operator - (Matrix<T> x, Matrix<T> y); 
    friend Matrix<T> operator * (Matrix<T> x, Matrix<T> y); 
    friend Matrix<T> operator * (T x, Matrix<T> y); // escalar*Matrix

};

#endif
#include "matriz.inl"

 
	
	
