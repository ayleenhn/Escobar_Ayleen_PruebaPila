#include "Pila.h"
#include <stdio.h>
#include <stdexcept>

Pila::Pila(){
	cima = -1;
}
bool Pila::pilaVacia() {
	return cima == -1;
}

bool Pila::pilaLlena() {
	return cima == TAMPILA - 1;
}
void Pila::insertar(Datos elemento){
	if (pilaLlena()) {
		throw std::overflow_error("La pila esta llena!");
	}
	listaPila[++cima] = elemento;
}

Datos Pila::quitar(){
	if (pilaVacia()) {
		throw std::underflow_error("Pila vacia, no se puede extraer!");
	}
	return listaPila[cima--];
}

void Pila::limpiarPila(){
	cima = -1;
}

Datos Pila::cimaPila(){
	if (pilaVacia()) {
		throw std::underflow_error("Pila vacia, no hay elemento!");
	}
	return listaPila[cima];
}
