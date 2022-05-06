#include <iostream>
#include <conio.h>
#include "Rectangulo.h"
#include "Punto.h"
#include <string>
using std::string;
using std::cout;

int main() {
	Punto p1(0, 0), p2(0, 0), p3(0, 0), p4(0, 0);
	Rectangulo r1(p1,p2,p3,p4);
	string tf = "";
	int bo = r1.verificar(Punto());
	tf = (bo == 1) ? "\nEs un rectangulo" : "\nNo es un rectangulo";
	cout << tf;
	r1.Obtener(Punto());
	_getch();
}