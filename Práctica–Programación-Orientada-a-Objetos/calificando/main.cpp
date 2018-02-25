#include <iostream>


#include <personas.h>
#include <profesor.h>
#include <alumno.h>

using namespace std;


void Calificando();

int main()
{
    Calificando();

    return 0;
}

void Calificando(){




    Personas *profesor = new Profesor();
    profesor->setNombre("Diego");
    profesor->setApellidos("Lujan Rengifo");
    profesor->setDni("71814547Z");


    Personas *alumno1 = new Alumno();
    alumno1->setNombre("Jacky");
    alumno1->setApellidos("Marruffo Rojas");
    alumno1->setDni("71814547Y");

    Personas *alumno2 = new Alumno();
    alumno2->setNombre("Andre");
    alumno2->setApellidos("Lujan Marruffo");
    alumno2->setDni("71814547X");

    Personas *alumno3 = new Alumno();
    alumno3->setNombre("Vechelina");
    alumno3->setApellidos("Lujan Marruffo");
    alumno3->setDni("71814547K");


    ((Profesor*)profesor)->aniadir((Alumno*)alumno1);       // se hace cast para forxar a ejecutar funcionde clase hija y casta para enviarlo como parametro ya que cuando se creo fue como persona no como alumno
    ((Profesor*)profesor)->aniadir((Alumno*)alumno2);
    ((Profesor*)profesor)->aniadir((Alumno*)alumno3);



    ((Profesor*)profesor)->asignar((Alumno*)alumno1,10);
    ((Profesor*)profesor)->asignar((Alumno*)alumno1,8,9.9);

    ((Profesor*)profesor)->asignar((Alumno*)alumno2,9);
    ((Profesor*)profesor)->asignar((Alumno*)alumno2,9,10);

    ((Profesor*)profesor)->asignar((Alumno*)alumno3,8,8);
    ((Profesor*)profesor)->asignar((Alumno*)alumno3,9,10);




    ((Profesor*)profesor)->aniadir((Alumno*)alumno1);       // se hace cast para forxar a ejecutar funcionde clase hija y casta para enviarlo como parametro ya que cuando se creo fue como persona no como alumno
    ((Profesor*)profesor)->aniadir((Alumno*)alumno2);
    ((Profesor*)profesor)->aniadir((Alumno*)alumno3);



    ((Profesor*)profesor)->asignar((Alumno*)alumno1,10);
    ((Profesor*)profesor)->asignar((Alumno*)alumno1,8,9.9);

    ((Profesor*)profesor)->asignar((Alumno*)alumno2,9);
    ((Profesor*)profesor)->asignar((Alumno*)alumno2,9,10);

    ((Profesor*)profesor)->asignar((Alumno*)alumno3,8,8);
    ((Profesor*)profesor)->asignar((Alumno*)alumno3,9,10);



    //profesor obtiene nota de alumno en concreto
    //cout <<  "nota del alumno "+ ((Profesor*)alumno1)->getNombre()<<  " " <<((Profesor*)profesor)->obtenerNotaMedia((Alumno*)alumno1) << endl;


    // si alumno quiere obtener sus notas
    //((Alumno*)alumno2)->obtenerNotas();
    // si alumno quiere añadir nota
    //((Alumno*)alumno2)->aniadir(5.5);

    ((Profesor*)profesor)->imprimirAlumnos();
    ((Profesor*)profesor)->imprimirAlumnoMejorMedia();
}
