#include "Alumno.h"
#include <iostream>
#include <string>
using namespace std;

Alumno::Alumno(string n, string a, int e,unsigned int mat, string car):Humano(n,a,e)
{
	al.matricula=mat;
	al.carrera=car;

}

unsigned int Alumno::getMat()
{
	return al.matricula;
}

string Alumno::getCar()
{
	return al.carrera;
}

void Alumno::actividad()
{
	cout<<"Yo estudio en "<<getCar()<<"\n";
}

Alumno::~Alumno()
{
	//dtor
}
