#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"    // para heredar clase base persona y atributos
#include "alumno.h"     // para poder añadir alumno a listado de alumnos
#include <vector>
#include <iostream>


class Profesor : public Persona
{
public:
    Profesor();
    //*****************************************************************************//
    //** Añadir un nuevo alumno en su lista de alumnos                           **//
    //************************************************************************************//
    void aniadirAlumno(Alumno *alumno);
    //************************************************************************************//
    //** Asignar 1, 2 o 3 notas a un alumno (sobrecarga de métodos).                    **//
    //************************************************************************************//
    void asignarNota(Alumno *alumno,double nota1);
    void asignarNota(Alumno *alumno,double nota1,double nota2);
    void asignarNota(Alumno *alumno,double nota1,double nota2,double nota3);
    //************************************************************************************//
    //** Obtener la nota media de un alumno (nota media de 1, 2 o 3 notas).             **//
    //************************************************************************************//
    float obtenerNota();
    //************************************************************************************//
    //** Imprimir por pantalla el listado de alumnos mostrando sus datos y nota media.  **//
    //************************************************************************************//
    void imprimirAlumnos();
    //*************************************************************************************//
    //** Imprimir por pantalla el alumno con mejor nota (entre los alumnos con 3 notas). **//
    //*************************************************************************************//
    void imprimirNotas();



    vector<Alumno *> getListaDeAlumnos() const;
    // void setListaDeAlumnos(const vector<Alumno> &value);

private:
    vector<Alumno*> listaDeAlumnos;

};

#endif // PROFESOR_H
