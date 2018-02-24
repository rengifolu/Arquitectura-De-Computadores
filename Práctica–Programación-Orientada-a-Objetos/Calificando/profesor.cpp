#include "profesor.h"
#include <iostream>


Profesor::Profesor(string _nombre, string _apellido, string _dni):
    PersonalEscuela(_nombre, _apellido,  _dni)
{

}

/*******************************************************/
/*Añadir un nuevo alumno en su lista de alumnos.       */
/*******************************************************/


void Profesor::aniadir(Alumno *alumno)
{
    listaDeAlumnos.push_back(alumno);

}


/****************************************************************************/
/*   Asignar 1, 2 o 3 notas a un alumno (sobrecarga de métodos).            */
/****************************************************************************/

void Profesor::asignar(Alumno *alumno,double nota1)
{

    //cout <<  alumno->getNombre() << endl;
    //recorremos la lista de alumnos y si es ese alumno añadimos nota
    for (int i = 0;  i < (int)getListaDeAlumnos().size(); i++) {

        if (alumno->getNombre()==getListaDeAlumnos()[i]->getNombre()) {

            alumno->aniadir(nota1);
            //añadimos nota a lista de notas
            //alumno->getListaDeNotas();
            // cout <<  getListaDeAlumnos()[i]->getNombre() << endl;

        }
    }
}

void Profesor::asignar(Alumno *alumno,double nota1, double nota2)
{
    for (int i = 0;  i < (int)getListaDeAlumnos().size(); i++) {

        if (alumno->getNombre()==getListaDeAlumnos()[i]->getNombre()) {

            alumno->aniadir(nota1);
            alumno->aniadir(nota2);

        }

    }
}

void Profesor::asignar(Alumno *alumno,double nota1, double nota2, double nota3)
{
    for (int i = 0;  i < (int)getListaDeAlumnos().size(); i++) {

        if (alumno->getNombre()==getListaDeAlumnos()[i]->getNombre()) {

            alumno->aniadir(nota1);
            alumno->aniadir(nota2);
            alumno->aniadir(nota3);

        }

    }
}

/****************************************************************************/
/* Obtener la nota media de un alumno (nota media de 1, 2 o 3 notas).       */
/****************************************************************************/

double Profesor::obtenerNotaMedia(Alumno *alumno)
{
  double notaMedia = 0 ;
  for (int i = 0;  i < (int)getListaDeAlumnos().size(); i++) {

      if (alumno->getNombre()==getListaDeAlumnos()[i]->getNombre()) {

          for (int i = 0;  i < (int)alumno->getListaDeNotas().size(); i++) {
                notaMedia += alumno->getListaDeNotas()[i];
          }

      }

  }
  alumno->setNotamedia(notaMedia/(int)alumno->getListaDeNotas().size());
  return alumno->getNotamedia();
}

/****************************************************************************************/
/* Imprimir por pantalla el listado de alumnos mostrando sus datos y nota media.        */
/****************************************************************************************/

void Profesor::imprimirAlumnos()
{
   cout << "/*************************************************************/" << endl;
   cout << "/***                      ALUMNOS                          ***/" << endl;
   cout << "/*************************************************************/" << endl;
   for (int i = 0; i < (int) getListaDeAlumnos().size(); i++) {
        cout << getListaDeAlumnos()[i]->getNombre() +" " + getListaDeAlumnos()[i]->getApellido()+" " + getListaDeAlumnos()[i]->getDni() +" ";
        cout << getListaDeAlumnos()[i]->getNotamedia() << endl;
   }
}

/****************************************************************************************/
/* Imprimir por pantalla el alumno con mejor nota (entre los alumnos con 3 notas).      */
/****************************************************************************************/
void Profesor::imprimirAlumnoMejorNota()
{
    double mejorNota = 0;
    double notaMedia = 0;
    int alumno;
    int numNotas;

    for (int i = 0; i < (int) getListaDeAlumnos().size(); i++) {
        if (getListaDeAlumnos()[i]->getListaDeNotas().size() == 3) {

            notaMedia = getListaDeAlumnos()[i]->getNotamedia();

            if (notaMedia>mejorNota) {
                numNotas = getListaDeAlumnos()[i]->getListaDeNotas().size();
                mejorNota=notaMedia;
                alumno = i;

            }
        }

    }

    if (numNotas == 3) {
        cout << "/*************************************************************/" << endl;
        cout << "/***  El alumno con mejor nota media y con 3 notas es :    ***/" << endl;
        cout << "/*************************************************************/" << endl;

        cout << getListaDeAlumnos()[alumno]->getNombre() +" " + getListaDeAlumnos()[alumno]->getApellido()+" " ;
        cout << mejorNota << endl;
    } else {
        cout << "/*************************************************************/" << endl;
        cout << "/***  no hay alumno con 3 notas  :      ***/" << endl;
        cout << "/*************************************************************/" << endl;

    }


}

vector<Alumno *> Profesor::getListaDeAlumnos() const
{
    return listaDeAlumnos;
}

//void Profesor::setListaDeAlumnos(const vector<Alumno *> &value)
//{
//    listaDeAlumnos = value;
//}





