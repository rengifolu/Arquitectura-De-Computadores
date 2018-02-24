#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include "vector"


class Alumno : public Persona
{
public:
    Alumno();
    void aniadir(double nota);
    void obtener();
    void devolver();


    vector<double> getListaDeNotas() const;
    // void setListaDeNotas(const vector<double> &value);

private:
    vector<double> listaDeNotas;
};

#endif // ALUMNO_H
