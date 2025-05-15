#include "Pila.h"
#include <iostream>

int main(){
    Pila pila;
    string texto;
    while (true) {
        cout << endl;
        cout << "Frase: ";
        getline(cin, texto);
        if (texto.empty()) {
            cout << "Termina el programa." << endl;
            break;
        }
        if (pila.esPalindromo(texto))
            cout << "La frase es un palindromo." << endl;
        else
            cout << "La frase no es un palindromo." << endl;
    }
    return 0;
}