#include <iostream>
#include <string>
using namespace std;
    void Palindromo(string texto, int aux){
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    int main() {
    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo" << endl;
    }
    
    return 0;
}
