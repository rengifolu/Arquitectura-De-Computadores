#include "alumno.h"

using namespace std;
#include <iostream>


Alumno::Alumno()
{

}

Alumno::~Alumno()
{

}

void Alumno::aniadir(double nota)
{
   listaDeNotas.push_back(nota);
}

void Alumno::obtenerNotas()
{
    for (int i = 0; i < (int)getListaDeNotas().size(); i++) {
       cout << getListaDeNotas()[i] << endl;
    }
}

vector<double> Alumno::getListaDeNotas() const
{
    return listaDeNotas;
}

//void Alumno::setListaDeNotas(const double &value)
//{
//    listaDeNotas = value;
//}
