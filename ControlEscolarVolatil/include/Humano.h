#ifndef HUMANO_H
#define HUMANO_H
#include <string>
using namespace std;

class Humano
{
	public:
		Humano(string n, string a, int e);
		string getNombre(), getApellidos();
		int getEdad(), ANac(),getANac();
		virtual void actividad()=0;
		virtual ~Humano();

	protected:

	private:
		struct elemental
		{
			string nombres,apellidos;
			int edad,nac;
		} hm;
};

#endif // HUMANO_H
