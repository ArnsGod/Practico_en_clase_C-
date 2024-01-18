/*
Titulo:Generar numeros aleatorios
Auntor:Jose Eduardo Flores Saravia
Descripcion: imprimir N cantidad de numeros aleatorios entre 0 y 99 donde la cantidad sera ingresado por el usuario
Fecha 2024-01-17
*/
#include <iostream>
/*la librer�a cstdlib, incluye la funci�n rand() que se utiliza para generar n�meros aleatorios.*/
#include <cstdlib>  // Necesario para la funci�n rand()
/*Incluye la librer�a ctime, que proporciona funciones relacionadas con el tiempo,
y se utiliza para inicializar la semilla de n�meros aleatorios con std::srand().*/
#include <ctime>// Necesario para inicializar la semilla de n�meros aleatorios
using namespace std;

int main() {
	// Solicitar al usuario ingresar un valor
	cout << "Ingrese un valor para determinar cu�ntos n�meros aleatorios desea generar: "<<endl;
	
	// Declarar una variable para almacenar el valor ingresado por el usuario
	int valor;
	cin >> valor;
	/*std::time(nullptr): std::time es una funci�n de la librer�a ctime que devuelve el tiempo actual 
	en segundos desde la �poca (normalmente, el 1 de enero de 1970) nullptr es un puntero nulo,
	y cuando se pasa como argumento a std::time, la funci�n devuelve el tiempo actual.*/
	/*static_cast<unsigned int>: Esto realiza una conversi�n de tipo conocida como static_cast. 
	Estamos convirtiendo el resultado de std::time(nullptr) a un tipo unsigned int. 
	La raz�n para esto es que la funci�n std::srand espera un argumento de tipo unsigned int como semilla.*/
	/*std::srand(...): std::srand es una funci�n que se utiliza para inicializar la semilla del generador de n�meros aleatorios utilizado por std::rand().
	La semilla es importante para que la secuencia de n�meros generados sea diferente en cada ejecuci�n del programa.*/
	// Inicializar la semilla de n�meros aleatorios usando el tiempo actual
	srand(static_cast<unsigned int>(std::time(nullptr)));
	
	// Generar y mostrar n�meros aleatorios seg�n el valor ingresado por el usuario
	std::cout << "N�meros aleatorios del 0 al 99:\n";//Muestra del texto
	for (int i = 0; i < valor; ++i) { // Inicia un bucle for que se ejecutar� valor veces.
		// Generar un n�mero aleatorio y mostrarlo
		/* Genera un n�mero aleatorio entre 0 y 99 utilizando std::rand() y el operador % (m�dulo).*/
		int numeroAleatorio = std::rand() % 100;  // Genera un n�mero entre 0 y 99
		std::cout << numeroAleatorio << " ";//Imprime el n�mero aleatorio generado.
	}
	
	return 0;
}

