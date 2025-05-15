#ifdef PILAL_H
#define PILA_H
typedef int Datos;
conts int TAMPILA = 150;
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
};
#endif // PILA_H