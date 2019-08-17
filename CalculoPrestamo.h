// Archivo: CalculoPrestamo.h

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 09/08/2019


#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H

#include <iostream>
#include <cstdint>
#include <string>

class CalculoPrestamo {

	float monto;

    //Metodos privados
	
    float obtenerPorcentaje(std::string porcentajeTXT);
	int calcularTiempoEnMeses(std::string tiempoTXT);
	float calcularInteresMensual(float balance, float tasaAnual);

public:

    //Constructores
	CalculoPrestamo();
	CalculoPrestamo(float monto);

	//Destructor
	~CalculoPrestamo();

	//Metodos Set/Get
	void setMonto(float monto);
	float getMonto();

	//Metodos de Calculo
	std::string reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT);

};



#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H