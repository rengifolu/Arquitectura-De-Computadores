#include "profesor.h"




Profesor::Profesor()
{

}

void Profesor::aniadirAlumno(Alumno *alumno)
{

    listaDeAlumnos.push_back(alumno);
}

void Profesor::asignarNota(Alumno *alumno,double nota1)
{
     alumno->aniadir(nota1);
}

void Profesor::asignarNota(Alumno *alumno, double nota1, double nota2)
{
    alumno->aniadir(nota1);
    alumno->aniadir(nota2);
}

void Profesor::asignarNota(Alumno *alumno,double nota1, double nota2, double nota3)
{
    alumno->aniadir(nota1);
    alumno->aniadir(nota2);
    alumno->aniadir(nota3);
}

float Profesor::obtenerNota()
{
//    for (int i = 0; i < (int)getListaDeAlumnos().size(); i++) {
//           // getListaDeAlumnos()[i].getListaDeNotas();
//        cout << "getListaDeAlumnos()[i]" << endl;
//            cout << getListaDeAlumnos()[i].getNombre() << endl;
//    }
    for (int i = 0; i < (int)getListaDeAlumnos().size(); i++) {
           // getListaDeAlumnos()[i].getListaDeNotas();
            cout << i << endl;
            cout << getListaDeAlumnos()[i]->getNombre() << endl;
    }
}

void Profesor::imprimirAlumnos()
{

}

void Profesor::imprimirNotas()
{

}

vector<Alumno*> Profesor::getListaDeAlumnos() const
{
    return listaDeAlumnos;
}

//void Profesor::setListaDeAlumnos(const vector<Alumno> &value)
//{
//    listaDeAlumnos = value;
//}

