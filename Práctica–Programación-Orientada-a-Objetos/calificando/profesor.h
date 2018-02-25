#ifndef PROFESOR_H
#define PROFESOR_H

#include "personas.h"
#include "alumno.h"
#include <vector>


class Profesor : public Personas
{
public:
    Profesor();
    ~Profesor();

    void aniadir(Alumno *alumno);
    void asignar(Alumno *alumno, double nota1);
    void asignar(Alumno *alumno, double nota1, double nota2);
    void asignar(Alumno *alumno, double nota1, double nota2, double nota3);
    double obtenerNotaMedia(Alumno *alumno);
    void imprimirAlumnos();
    void imprimirAlumnoMejorMedia();




    vector<Alumno *> getListaDeAlumnos() const;
    void setListaDeAlumnos(const vector<Alumno *> &value);

private:
    vector<Alumno*> listaDeAlumnos;
};

#endif // PROFESOR_H
