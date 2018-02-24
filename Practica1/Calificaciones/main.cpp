#include <iostream>

#include <alumno.h>
#include <profesor.h>
#include <persona.h>


using namespace std;

void calificando();

int main()
{
    calificando();
    return 0;
}

void calificando(){


   Profesor *profesor = new Profesor();
   profesor->setNombre("Diego");
   profesor->setApellidos("Lujan Rengifo");
   profesor->setDni("71814547Z");



   Alumno *alumno = new Alumno();
   alumno->setNombre("Andre");
   alumno->setApellidos("Lujan Marruffo");
   alumno->setDni("71814547X");

   Alumno *alumno2 = new Alumno();
   alumno2->setNombre("Ana");
   alumno2->setApellidos("Marruffo Rojas");
   alumno2->setDni("71814548Y");

   profesor->aniadirAlumno(alumno);
   profesor->aniadirAlumno(alumno2);


   profesor->asignarNota(alumno,5.4);

   profesor->obtenerNota();

   //cout << profesor->getNombre()+" "+profesor->getApellidos()+" "+profesor->getDni() << endl;

   //cout << alumno->getNombre()+" "+alumno->getApellidos()+" "+alumno->getDni() << endl;



   ;

}
