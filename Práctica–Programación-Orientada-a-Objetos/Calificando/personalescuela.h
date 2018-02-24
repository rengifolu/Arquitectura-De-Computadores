#ifndef PERSONALESCUELA_H
#define PERSONALESCUELA_H

#include<string>
using namespace std;


class PersonalEscuela
{
public:
    PersonalEscuela();
    PersonalEscuela(string _nombre, string _apellido, string _dni);

    string getNombre();
    // void setNombre(const string &value);

    string getApellido();
    // void setApellido(const string &value);

    string getDni();
    // void setDni(const string &value);

protected:
    string nombre;
    string apellido;
    string dni;
};

#endif // PERSONALESCUELA_H
