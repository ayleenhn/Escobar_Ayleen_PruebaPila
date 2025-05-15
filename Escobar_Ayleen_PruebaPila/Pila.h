#ifndef PILA_H
#define PILA_H
#include <string>
using namespace std;

typedef char Datos;
const int TAMPILA = 150;

class Pila {
private:
    int cima;
    Datos listaPila[TAMPILA];

public:
    Pila();
    void insertar(Datos elemento);
    Datos quitar();
    void limpiarPila();
    Datos cimaPila();
    bool pilaVacia();
    bool pilaLlena();
    bool esPalindromo(string frase);
};
#endif // PILA_H