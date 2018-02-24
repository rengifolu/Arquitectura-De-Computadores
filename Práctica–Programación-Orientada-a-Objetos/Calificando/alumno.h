#ifndef ALUMNO_H
#define ALUMNO_H


#include "personalescuela.h"
#include <vector>

class Alumno : public PersonalEscuela
{
public:
    Alumno(string _nombre, string _apellido, string _dni);
    void aniadir(double nota);
    void obtenerNotas();
    void devolverNumNotas();

    vector<double> getListaDeNotas() const;
    //void setListaDeNotas(const vector<double> &value);



    double getNotamedia() const;
    void setNotamedia(double value);

protected:

    vector<double> listaDeNotas;
private:
    double notamedia;


};


#endif // ALUMNO_H
