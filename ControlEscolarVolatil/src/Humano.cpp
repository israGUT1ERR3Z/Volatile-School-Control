#include "Humano.h"
#include <string>
using namespace std;

Humano::Humano(string n, string a, int e)
{
	hm.nombres=n;
	hm.apellidos=a;
	hm.edad=e;
}

string Humano::getNombre()
{
	return hm.nombres;
}

string Humano::getApellidos()
{
	return hm.apellidos;
}

int Humano::getEdad()
{
	return hm.edad;
}

int Humano::ANac()
{
	hm.nac=2022-getEdad();
	return hm.nac;
}

int Humano::getANac()
{
	return ANac();
}

Humano::~Humano()
{
	//dtor
}
