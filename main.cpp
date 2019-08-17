// Archivo: main.cpp

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 09/08/2019


#include <iostream>
#include <string>
#include "CalculoPrestamo.h"
using namespace std;

int main() {
	
	CalculoPrestamo prestamo1(30000.000000);

	cout << "Prestamo1: " << endl;

   std::cout << prestamo1.CalculoPrestamo::reporteCalculoPrestamo ("1A", "84%") << std::endl;
 
	return 0;
}