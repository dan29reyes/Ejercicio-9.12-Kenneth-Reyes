#pragma once
#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
	float x, y;

public:
	Punto();
	Punto(float, float);
	float getX();
	float getY();
	float getSize(Punto, Punto);
};

#endif

