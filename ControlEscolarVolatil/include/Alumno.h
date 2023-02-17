#ifndef ALUMNO_H
#define ALUMNO_H
#include "Humano.h"
#include <string>
using namespace std;

class Alumno: public Humano
{
	public:
		Alumno(string n, string a, int e,unsigned int mat, string car);
		void actividad();
		unsigned int getMat();
		string getCar();
		virtual ~Alumno();

	protected:

	private:
		struct datos
		{
			struct elemental hm;
			unsigned int matricula;
			string carrera;
		}al;
};

#endif // ALUMNO_H
