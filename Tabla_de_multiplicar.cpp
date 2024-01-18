/*
Titulo:Tabla de multiplicar
Auntor:Jose Eduardo Flores Saravia
Descripcion: Imprimir una tabla de multiplicar de un numero dado por el usuario
Fecha 2024-01-17
*/
#include <iostream>

using namespace std;

int main() {
	// Solicitar al usuario ingresar un valor
	cout << "Ingrese un valor para generar la tabla de multiplicar: ";
	
	// Declarar una variable para almacenar el valor ingresado por el usuario
	int valor;
	//lee el valor ingresado por el usuario y lo almacena en la variable valor
	cin >> valor; 
	
	// Mostrar la tabla de multiplicar para el valor ingresado
	cout << "Tabla de multiplicar de " << valor << ":\n";
	
	//inicia un bucle que va desde 1 hasta 10.
	for (int i = 1; i <= 10; ++i) {//(inicio int es igual a 1;condicion hasta que sea mayor o igual a 10; incremento de valor ++i)
		/*Calcular la multiplicación e imprimir.
		calcula la multiplicación y muestra cada línea de la tabla de multiplicar.*/
		cout << valor << " * " << i << " = " << (valor * i) << "\n";
	}
	
	return 0;
}
