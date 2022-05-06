#pragma once
#include "Punto.h"
#include <iostream>
#ifndef RECTANGULO_H
#define RECTANGULO_H

using std::string;

class Rectangulo
{
private:
	Punto p1, p2, p3, p4;

public:
	Rectangulo();
	Rectangulo(Punto, Punto, Punto, Punto);

	void establecer();
	bool verificar(Punto);
	float calcLongitud(Punto);
	float calcAnchura(Punto);
	float calcPerimetro(Punto);
	float calcArea(Punto);
	string cuadrado(Punto);
	void Obtener(Punto);


};

#endif
