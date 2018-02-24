#ifndef PERSONA_H
#define PERSONA_H
#include<string>

using namespace std;

class Persona
{
public:
     Persona(string nombre,string apellido,string dni);


     //*************************************************************************//
     //                                   "Getters" & "Setters"                 //
     //*************************************************************************//

     void setNombre(string nombre);
     string getNombre();

     void setApellidos(string apellidos);
     string getApellidos();

     void setDni(string dni);
     string getDni();

private:
     string nombre;
     string apellidos;
     string dni;

};


#endif // PERSONA_H
