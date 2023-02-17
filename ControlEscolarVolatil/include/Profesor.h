#ifndef PROFESOR_H
#define PROFESOR_H
#include "Humano.h"
#include <string>
#include <vector>
using namespace std;

class Profesor: public Humano
{
	public:
		Profesor(string n, string a, int e,unsigned int mat);
		void actividad();
		unsigned int getMat();
		virtual ~Profesor();

	protected:

	private:
		struct datos
		{
			struct elemental hm;
			unsigned int matricula;
		}pr;
		int num;

};

#endif // PROFESOR_H
