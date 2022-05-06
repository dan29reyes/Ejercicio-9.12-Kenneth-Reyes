#include "Rectangulo.h"
#include <conio.h>
#include <iostream>
#include <math.h>
#include "Punto.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Rectangulo::Rectangulo() : p1(0,0), p2(0,0), p3(0,0), p4(0,0) {}

Rectangulo::Rectangulo(Punto _p1, Punto _p2, Punto _p3, Punto _p4):
	p1(_p1), p2(_p2), p3(_p3), p4(_p4) {
	establecer();
}

void Rectangulo::establecer(){
	float x[4], y[4];
	for (int i = 0; i < 4; i++) {
		cout << "\n\tPunto " << (i+1);
		cout << "\nIngrese una coordenada en x: "; cin >> x[i];
		cout << "Ingrese una coordenada en y: "; cin >> y[i];
		if (x[i] < 0 || x[i] > 20 || y[i] < 0 || y[i] > 20) {
			i--;
			cout << "El punto esta fuera del rango establecido!" 
				"\nIngrese el punto nuevamente!\n";
		}
	}
	p1 = Punto(x[0], y[0]);
	p2 = Punto(x[1], y[1]);
	p3 = Punto(x[2], y[2]);
	p4 = Punto(x[3], y[3]);
}

bool Rectangulo::verificar(Punto _pun) {
	return (_pun.getSize(p1, p2) == _pun.getSize(p1, p3)) ? true : (_pun.getSize(p1, p2) == _pun.getSize(p1, p4)) ?
		true : (_pun.getSize(p1, p2) == _pun.getSize(p2, p3)) ? true : (_pun.getSize(p1, p2) == _pun.getSize(p2, p4)) ?
		true : (_pun.getSize(p1, p2) == _pun.getSize(p3, p4)) ? true: false;
}

float Rectangulo::calcLongitud(Punto _pun) {
	float mayor = 0;
	mayor = (_pun.getSize(p1, p2) < _pun.getSize(p1, p3)) ? _pun.getSize(p1,p2) : (_pun.getSize(p1, p2) < _pun.getSize(p1, p4)) ?
		_pun.getSize(p1,p2): (_pun.getSize(p1, p2) < _pun.getSize(p2, p3)) ? _pun.getSize(p1,p2) : (_pun.getSize(p1, p2) < _pun.getSize(p2, p4)) ?
		_pun.getSize(p1, p2) : (_pun.getSize(p1, p2) < _pun.getSize(p3, p4)) ? _pun.getSize(p1, p2) : _pun.getSize(p1, p2);
	return mayor;
}

float Rectangulo::calcAnchura(Punto _pun){
	float menor = 0;
	menor = (_pun.getSize(p1, p2) > _pun.getSize(p1, p3)) ? _pun.getSize(p1, p3) : (_pun.getSize(p1, p2) > _pun.getSize(p1, p4)) ?
		_pun.getSize(p1, p4) : (_pun.getSize(p1, p2) > _pun.getSize(p2, p3)) ? _pun.getSize(p2, p3) : (_pun.getSize(p1, p2) > _pun.getSize(p2, p4)) ?
		_pun.getSize(p2, p4) : (_pun.getSize(p1, p2) > _pun.getSize(p3, p4)) ? _pun.getSize(p3, p4) : _pun.getSize(p1, p2);
	return menor;
}

float Rectangulo::calcPerimetro(Punto _pun){
	float perim = 2 * calcLongitud(_pun) + 2 * calcAnchura(_pun);
	return perim;
}

float Rectangulo::calcArea(Punto _pum){
	float area = calcLongitud(_pum) * calcAnchura(_pum);
	return area;
}

string Rectangulo::cuadrado(Punto _pum){
	if (calcLongitud(_pum) == calcAnchura(_pum)) {
		return "\nEsta figura es un cuadrado";
	}
	else
		return "\nEsta figura no es un cuadrado";
}

void Rectangulo::Obtener(Punto _pum) {
	cout << "\nEl rectangulo ingresado tiene los siguientes datos: \nLongitud: " << calcLongitud(_pum)
		<< "\nAnchura: " << calcAnchura(_pum) << "\nPerimetro: " << calcPerimetro(_pum) << "\nArea: "
		<< calcArea(_pum) << cuadrado(_pum);
}








