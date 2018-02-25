#ifndef PERSONAS_H
#define PERSONAS_H


#include <string>
using namespace std;


class Personas
{
public:
    Personas();
    Personas(string _nombre,string _apellidos,string _dni);
    ~Personas();


    /***************************Getters y Setters**********************************/


    string getNombre() const;
    void setNombre(const string &value);

    string getApellidos() const;
    void setApellidos(const string &value);

    string getDni() const;
    void setDni(const string &value);

private:
    string nombre;
    string apellidos;
    string dni;
};

#endif // PERSONAS_H

