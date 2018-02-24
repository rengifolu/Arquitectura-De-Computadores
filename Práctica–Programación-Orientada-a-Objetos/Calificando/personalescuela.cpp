#include "personalescuela.h"

PersonalEscuela::PersonalEscuela(string _nombre, string _apellido, string _dni)
{
    nombre = _nombre;
    apellido = _apellido;
    dni = _dni;

}

string PersonalEscuela::getNombre()
{
    return nombre;
}


string PersonalEscuela::getApellido()
{
    return apellido;
}



string PersonalEscuela::getDni()
{
    return dni;
}


