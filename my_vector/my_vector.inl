#include<assert.h>
#include<cstring>

template<class T>
my_vector<T>::my_vector(int p_size): m_size(p_size) //constructor
{
	max_cap= m_size+delta_cap;
	T *p_data = new  T[max_cap];
}

template<class T>
my_vector<T>::my_vector(const my_vector <T> & v) // constructor copia
{
	m_size= v.msize;
	max_cap= v.max_cap;
	p_data= new T [max_cap];
	
	for(int i=0; i<m_size;i++)
		p_data[i]=v.p_data[i];
}

template<class T>
my_vector<T>::~my_vector() //destructor
{
	delete []p_data;
}

template<class T>
void my_vector<T>::reserve(int p_cap)
{
	assert(p_cap>m_size); //si es falso, termina el programa y da error en la linea
	T* old_data=p_data;
	max_cap=p_cap;
	p_data = new T[max_cap];
	for(int i=0; i<m_size;i++)
		p_data[i]=old_data[i];
}
