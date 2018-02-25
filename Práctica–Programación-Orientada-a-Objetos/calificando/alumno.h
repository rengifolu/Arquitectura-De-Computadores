#ifndef ALUMNO_H
#define ALUMNO_H

#include "personas.h"
#include <vector>

class Alumno : public Personas
{
public:
    Alumno();
    ~Alumno();
    void aniadir(double nota);
    void obtenerNotas();


    vector<double> getListaDeNotas() const;
    //void setListaDeNotas(const vector<double> &value);

private:
    vector<double> listaDeNotas;
};

#endif // ALUMNO_H
