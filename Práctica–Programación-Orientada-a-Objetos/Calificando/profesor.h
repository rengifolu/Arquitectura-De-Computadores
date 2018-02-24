#ifndef PROFESOR_H
#define PROFESOR_H

#include "personalescuela.h"
#include "alumno.h"
#include <vector>


class Profesor : public PersonalEscuela
{
public:
    Profesor(string _nombre, string _apellido, string _dni);
    void aniadir(Alumno *alumno);
    void asignar(Alumno *alumno,double nota1);
    void asignar(Alumno *alumno,double nota1,double nota2);
    void asignar(Alumno *alumno,double nota1,double nota2,double nota3);
    double obtenerNotaMedia(Alumno *alumno);
    void imprimirAlumnos();
    void imprimirAlumnoMejorNota();




    vector<Alumno *> getListaDeAlumnos() const;
    //void setListaDeAlumnos(const vector<Alumno *> &value);

private:
    vector<Alumno*> listaDeAlumnos;
};

#endif // PROFESOR_H
