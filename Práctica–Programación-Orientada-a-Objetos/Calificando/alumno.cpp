#include "alumno.h"
#include <iostream>

Alumno::Alumno(string _nombre, string _apellido, string _dni):
    PersonalEscuela(_nombre, _apellido,  _dni)
{

}

/****************************************************************************/
/*   Añadir una nueva nota en su lista de notas.                            */
/****************************************************************************/

void Alumno::aniadir(double nota)
{

    listaDeNotas.push_back(nota);

}

/****************************************************************************/
/*   Obtener cada una de sus notas, de su lista de notas.                   */
/****************************************************************************/

void Alumno::obtenerNotas()
{

    for (int i = 0; i < (int)getListaDeNotas().size(); ++i) {
           cout << getListaDeNotas()[i]<< endl;

    }

}

/****************************************************************************/
/* Devolver el número de notas que tiene en su lista (tamaño de la lista).  */
/****************************************************************************/

void Alumno::devolverNumNotas()
{

   cout << getListaDeNotas().size()<< endl;

}

vector<double> Alumno::getListaDeNotas() const
{
    return listaDeNotas;
}

double Alumno::getNotamedia() const
{
    return notamedia;
}

void Alumno::setNotamedia(double value)
{
    notamedia = value;
}

//void Alumno::setListaDeNotas(const vector<double> &value)
//{
//    listaDeNotas = value;
//}


