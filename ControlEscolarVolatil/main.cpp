#include <string>
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <vector>
#include "Alumno.h"
#include "Profesor.h"
using namespace std;

int main()
{

	int opc,index,ed,tam;
	unsigned int matri;
	string no,ap,carr;
	string materias[5];
	vector<Alumno>vecA;
	vector<Profesor>vecP;
	//Profesor *prof[];

	setlocale(LC_CTYPE,"spanish");
	do
	{
		cout << "--------------------CONTROL ESCOLAR VOLÁTIL--------------------\n\nElige cualquiera de las opciones para ";
		cout<<"empezar a registrar o consultar:\n\n\t1. Registrar Alumnos\n\t2. Consultar Alumnos\n\t3. Registrar Profesores";
		cout<<"\n\t4. Consultar Profesores\n\t5. Salir\n\n\tOpción: ";
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1:
				{
					cout<<"--------------------REGISTRO DE ALUMNOS--------------------\n\nCantidad de alumnos a registrar: ";
					cin>>index;
					//vecA.resize(index);
					for(int i=0; i<index;i++)
					{
						cout<<"Nombre(s): "; cin>>no;
						cout<<"Apellidos: "; cin>>ap;
						cout<<"Edad: "; cin>>ed;
						cout<<"Matrícula: "; cin>>matri;
						cout<<"Carrera: "; cin>>carr;
						Sleep(2000);
						Alumno alum(no,ap,ed,matri,carr);
						vecA.insert(vecA.end(),(Alumno)alum);
						cout<<"\n\n\n\n\n";
					}
					cout<<"\n\n\nPara ir al menú principal "<<system("pause");
					system("cls");

				}
			break;

			case 2:
				{
					cout<<"--------------------CONSULTA DE ALUMNOS--------------------\n\nDatos de alumnos ingresados: ";
					tam=vecA.size();
					cout<<tam<<"\n\n";
					for(int i=0; i<tam;i++)
					{
						cout<<"Nombre(s): "<<vecA.at(i).getNombre();
						cout<<"\nApellidos: "<<vecA.at(i).getApellidos();
						cout<<"\nEdad: "<<vecA.at(i).getEdad()<<"\nNació en "<<vecA.at(i).getANac();
						cout<<"\nMatrícula: "<<vecA.at(i).getMat();
						cout<<"\nCarrera: "<<vecA.at(i).getCar();
						cout<<"\n\n\n";
					}
					cout<<"\n\n\nPara ir al menú principal "<<system("pause");
					system("cls");

				}
			break;

			case 3:
				{
					cout<<"--------------------REGISTRO DE PROFESORES--------------------\n\nCantidad de profesores a registrar: ";
					cin>>index;
					for(int i=0; i<index;i++)
					{
						cout<<"Nombre(s): "; cin>>no;
						cout<<"Apellidos: "; cin>>ap;
						cout<<"Edad: "; cin>>ed;
						cout<<"No. de Cuenta: "; cin>>matri;
						Profesor profe(no,ap,ed,matri);
						vecP.insert(vecP.end(),profe);
						cout<<"\n\n\n\n\n";
					}
					cout<<"\n\n\nPara ir al menú principal "<<system("pause");
					system("cls");

				}
			break;

			case 4:
				{
					cout<<"--------------------CONSULTA DE PROFESORES--------------------\n\nDatos de alumnos ingresados: ";
					tam=vecP.size();
					cout<<tam<<"\n\n";
					for(int i=0; i<tam;i++)
					{
						cout<<"Nombre(s): "<<vecP.at(i).getNombre();
						cout<<"\nApellidos: "<<vecP.at(i).getApellidos();
						cout<<"\nEdad: "<<vecP.at(i).getEdad()<<"\nNació en "<<vecP.at(i).getANac();
						cout<<"\nMatrícula: "<<vecP.at(i).getMat()<<"\n\n";
						cout<<"--------------------------------------------------------------------\n\n\n";
					}
					cout<<"\n\n\nPara ir al menú principal "<<system("pause");
					system("cls");

				}
			break;

			case 5:
				cout<<"\n\n\nAdios!!\n\n\n";
			break;
		}
	}while(opc!=5);


    return 0;
}
