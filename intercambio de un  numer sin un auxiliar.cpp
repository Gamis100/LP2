#include <stdio.h>
 
int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	printf("Antes de intercambiar, a: %d, b: %d\n", a, b);
	a = a + b ; // ahora a es 30 y b es 20
    b = a - b ; // ahora a es 30 pero b es 10 (valor original de a)
    a = a - b ; // ahora a es 20 y b es 10, los números son intercambiado
	printf("Despues de intercambiar ,a: %d, b: %d\n", a, b);
	return 0;
}
