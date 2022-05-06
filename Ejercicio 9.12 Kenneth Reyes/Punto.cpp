#include "Punto.h"
#include <iostream>
Punto::Punto() : x(0), y(0){}

Punto::Punto(float _x, float _y) : x(_x), y(_y) {}

float Punto::getX() {
	return x;
}

float Punto::getY() {
	return y;
}

float Punto::getSize(Punto _p1, Punto _p2) {
	return (sqrt(pow(_p1.getX() - _p2.getX(), 2)) + (pow(_p1.getY() - _p2.getY(), 2)));
}
