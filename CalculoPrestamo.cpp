// Archivo: CalculoPrestamo.cpp

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 09/08/2019

#include <iostream>
#include <string>
#include <sstream>
#include "CalculoPrestamo.h"
using::std::string;

//Constructor sin parametros
CalculoPrestamo::CalculoPrestamo() {
	setMonto(0);
}

//Constructor con parametros
CalculoPrestamo::CalculoPrestamo(float monto): monto(monto) {}

CalculoPrestamo::~CalculoPrestamo() {}

void CalculoPrestamo::setMonto(float) {}
float CalculoPrestamo::getMonto() { return monto; }

//Metodos Privados
float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
	return (std::stod(porcentajeTXT))/10;
}

int CalculoPrestamo::calcularTiempoEnMeses(std::string tiempoTXT) {
	std::string mes = "M";
	std::string annio = "A";
	if (tiempoTXT == "M") {
		return std::stod(mes);
	}
	else {
		if (tiempoTXT == "A") {
			return std::stod(annio) * 12;
		}
	}
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
	return (balance*tasaAnual)/12;
}

//Metodo Publico
std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {
	std::string report = " ";
	int tiempoMes = calcularTiempoEnMeses(tiempoTXT) + 1;
	float porcentaje = obtenerPorcentaje(porcentajeTXT);
	float balance = monto;
	float balanceDeInicio = monto;

	for (int mes = 1; mes < tiempoMes; ++mes) {

		float interesMensual = calcularInteresMensual(balanceDeInicio, porcentaje);
		balance = balanceDeInicio;
		balanceDeInicio = balance + interesMensual;
		report += "Tasa [" + porcentajeTXT + "] Mes [" + std::to_string(mes) + "], Balance Inicial ["
			+ std::to_string(monto) + "], Interes [" + std::to_string(interesMensual); "]";
	}

	return report;
}





