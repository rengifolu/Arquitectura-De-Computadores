#include "profesor.h"
#include "alumno.h"

using namespace std;
#include <iostream>


Profesor::Profesor()
{

}

Profesor::~Profesor()
{

}

void Profesor::aniadir(Alumno *alumno)
{
   listaDeAlumnos.push_back(alumno);

}

void Profesor::asignar(Alumno *alumno, double nota1)
{
    alumno->aniadir(nota1);

}

void Profesor::asignar(Alumno *alumno, double nota1, double nota2)
{
    alumno->aniadir(nota1);
    alumno->aniadir(nota2);

}

void Profesor::asignar(Alumno *alumno, double nota1, double nota2, double nota3)
{
    alumno->aniadir(nota1);
    alumno->aniadir(nota2);
    alumno->aniadir(nota3);
}

double Profesor::obtenerNotaMedia(Alumno *alumno)
{
    double media;
    for (int i = 0; i < (int)alumno->getListaDeNotas().size(); ++i) {
          media += alumno->getListaDeNotas()[i];
    }
    return media/(int)alumno->getListaDeNotas().size();
}

void Profesor::imprimirAlumnos()
{
    cout << "/*************************************************************/" << endl;
    cout << "/***                      ALUMNOS                          ***/" << endl;
    cout << "/*************************************************************/" << endl;
    for (int i = 0; i < (int) getListaDeAlumnos().size(); i++) {
      cout <<getListaDeAlumnos()[i]->getNombre() +" "+ getListaDeAlumnos()[i]->getApellidos() +" "+ getListaDeAlumnos()[i]->getDni() << endl;
      cout<< "Notas "<< endl;
      for (int j = 0; j < getListaDeAlumnos()[i]->getListaDeNotas().size(); j++) {
           cout<< "nota"<< j+1 << " es  "<< getListaDeAlumnos()[i]->getListaDeNotas()[j]<< endl;
      }

      cout<< "Nota media :" << obtenerNotaMedia(getListaDeAlumnos()[i]) << endl;

      cout<< endl;



     // cout <<  getListaDeAlumnos()[i]->getNombre() << " " << getListaDeAlumnos()[i]->getApellidos() << " con DNI " << getListaDeAlumnos()[i]->getDni() << " y nota media " << obtenerNotaMedia(getListaDeAlumnos()[i]) << endl;
    }

    //cout << (int) getListaDeAlumnos().size() << endl;
}

void Profesor::imprimirAlumnoMejorMedia()
{
    double mejorNota = 0;
    int alumno;
    int numNotas;

    for (int i = 0; i < (int) getListaDeAlumnos().size(); i++) {
        if (getListaDeAlumnos()[i]->getListaDeNotas().size() == 3) {  // si el alumno tiene 3 notas

            if (obtenerNotaMedia(getListaDeAlumnos()[i])>mejorNota) {
                numNotas = getListaDeAlumnos()[i]->getListaDeNotas().size();
                mejorNota=obtenerNotaMedia(getListaDeAlumnos()[i]);
                alumno = i;

            }
        }

    }

    if (numNotas == 3) {
        cout << "/*************************************************************/" << endl;
        cout << "/***  El alumno con mejor nota media y con 3 notas es :    ***/" << endl;
        cout << "/*************************************************************/" << endl;

        cout << getListaDeAlumnos()[alumno]->getNombre() +" " + getListaDeAlumnos()[alumno]->getApellidos()+" " ;
        cout << mejorNota << endl;
    } else {
        cout << "/*************************************************************/" << endl;
        cout << "/***  no hay alumno con 3 notas  :                         ***/" << endl;
        cout << "/*************************************************************/" << endl;

    }
}

vector<Alumno *> Profesor::getListaDeAlumnos() const
{
    return listaDeAlumnos;
}

void Profesor::setListaDeAlumnos(const vector<Alumno *> &value)
{
    listaDeAlumnos = value;
}



