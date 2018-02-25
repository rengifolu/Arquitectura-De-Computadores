#include "personas.h"


Personas::Personas()
{

}

Personas::Personas(string _nombre, string _apellidos, string _dni)
{
   nombre=_nombre;
   apellidos = _apellidos;
   dni = _dni;
}

Personas::~Personas()
{

}

string Personas::getNombre() const
{
    return nombre;
}

void Personas::setNombre(const string &value)
{
    nombre = value;
}

string Personas::getApellidos() const
{
    return apellidos;
}

void Personas::setApellidos(const string &value)
{
    apellidos = value;
}

string Personas::getDni() const
{
    return dni;
}

void Personas::setDni(const string &value)
{
    dni = value;
}
