#include "Profesor.h"
#include <string>
#include <iostream>
using namespace std;

Profesor::Profesor(string n, string a, int e,unsigned int mat):Humano(n,a,e)
{
	pr.matricula=mat;
}

unsigned int Profesor::getMat()
{
	return pr.matricula;
}

void Profesor::actividad()
{

}


Profesor::~Profesor()
{
	//dtor
}
