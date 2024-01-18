/*
Titulo:Generar numeros aleatorios
Auntor:Jose Eduardo Flores Saravia
Descripcion: imprimir N cantidad de numeros aleatorios entre 0 y 99 donde la cantidad sera ingresado por el usuario
Fecha 2024-01-17
*/
#include <iostream>
/*la librería cstdlib, incluye la función rand() que se utiliza para generar números aleatorios.*/
#include <cstdlib>  // Necesario para la función rand()
/*Incluye la librería ctime, que proporciona funciones relacionadas con el tiempo,
y se utiliza para inicializar la semilla de números aleatorios con std::srand().*/
#include <ctime>// Necesario para inicializar la semilla de números aleatorios
using namespace std;

int main() {
	// Solicitar al usuario ingresar un valor
	cout << "Ingrese un valor para determinar cuántos números aleatorios desea generar: "<<endl;
	
	// Declarar una variable para almacenar el valor ingresado por el usuario
	int valor;
	cin >> valor;
	/*std::time(nullptr): std::time es una función de la librería ctime que devuelve el tiempo actual 
	en segundos desde la época (normalmente, el 1 de enero de 1970) nullptr es un puntero nulo,
	y cuando se pasa como argumento a std::time, la función devuelve el tiempo actual.*/
	/*static_cast<unsigned int>: Esto realiza una conversión de tipo conocida como static_cast. 
	Estamos convirtiendo el resultado de std::time(nullptr) a un tipo unsigned int. 
	La razón para esto es que la función std::srand espera un argumento de tipo unsigned int como semilla.*/
	/*std::srand(...): std::srand es una función que se utiliza para inicializar la semilla del generador de números aleatorios utilizado por std::rand().
	La semilla es importante para que la secuencia de números generados sea diferente en cada ejecución del programa.*/
	// Inicializar la semilla de números aleatorios usando el tiempo actual
	srand(static_cast<unsigned int>(std::time(nullptr)));
	
	// Generar y mostrar números aleatorios según el valor ingresado por el usuario
	std::cout << "Números aleatorios del 0 al 99:\n";//Muestra del texto
	for (int i = 0; i < valor; ++i) { // Inicia un bucle for que se ejecutará valor veces.
		// Generar un número aleatorio y mostrarlo
		/* Genera un número aleatorio entre 0 y 99 utilizando std::rand() y el operador % (módulo).*/
		int numeroAleatorio = std::rand() % 100;  // Genera un número entre 0 y 99
		std::cout << numeroAleatorio << " ";//Imprime el número aleatorio generado.
	}
	
	return 0;
}

