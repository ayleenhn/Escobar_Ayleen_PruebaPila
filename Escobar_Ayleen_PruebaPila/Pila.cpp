#include "Pila.h"
#include <stdexcept>
#include <cctype>
Pila::Pila() {
    cima = -1;
}

bool Pila::pilaVacia() {
    return cima == -1;
}

bool Pila::pilaLlena() {
    return cima == TAMPILA - 1;
}

void Pila::insertar(Datos elemento) {
    if (pilaLlena())
        throw overflow_error("La pila esta llena.");
    listaPila[++cima] = elemento;
}

Datos Pila::quitar() {
    if (pilaVacia())
        throw underflow_error("La pila esta vacia.");
    return listaPila[cima--];
}

void Pila::limpiarPila() {
    cima = -1;
}

Datos Pila::cimaPila() {
    if (pilaVacia())
        throw underflow_error("La pila está vacia.");
    return listaPila[cima];
}

bool Pila::esPalindromo(string frase) {
    Pila datosPila;
    string frase2 = "";
    //usando fore
    for (char letra : frase) {
        if (isdigit(letra) || isalnum(letra) ){
            letra = tolower(letra);
            frase2 += letra;
            datosPila.insertar(letra);
        }
    }
    for (char letra : frase2) {
        if (letra != datosPila.quitar())
            return false;
    }
    return true;
}