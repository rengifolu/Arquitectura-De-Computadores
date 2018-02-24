#include <iostream>
#include "profesor.h"
#include "alumno.h"


using namespace std;


void Calificando();

int main()
{
    Calificando();
    return 0;
}

void Calificando(){



    // se crea profesor
    Profesor *profesor = new  Profesor("Diego","Lujan Rengifo","71814547Z");

    // se crean alumnos
    Alumno *alumno1 = new Alumno("Ana","Marruffo Rojas","71814547X");
    Alumno *alumno2 = new Alumno("Andre","Lujan Marruffo","71814547Y");
    Alumno *alumno3 = new Alumno("vechelina","Lujan Marruffo","71814547Y");
    Alumno *alumno4 = new Alumno("jaqueline","Lujan Marruffo","71814547Y");
    Alumno *alumno5 = new Alumno("Armando","Lujan Rengifo","71814547A");


    // se añaden alumnos a listas de alumnos del profesor
    profesor->aniadir(alumno1);
    profesor->aniadir(alumno2);
    profesor->aniadir(alumno3);
    profesor->aniadir(alumno4);
    profesor->aniadir(alumno5);

    // se asignan notas a alumnos
    profesor->asignar(alumno1,9.5);
    profesor->asignar(alumno1,9.9,10);
    profesor->asignar(alumno1,8.7,9.8,10);



    profesor->asignar(alumno2,7.6,9.0,9.5);

    profesor->asignar(alumno3,7.5,9.3,7.5);

    profesor->asignar(alumno4,9,9,9);

    profesor->asignar(alumno5,10,10,10);



    // se calculan notas medias de alumnos
    profesor->obtenerNotaMedia(alumno1);
    profesor->obtenerNotaMedia(alumno2);
    profesor->obtenerNotaMedia(alumno3);
    profesor->obtenerNotaMedia(alumno4);
    profesor->obtenerNotaMedia(alumno5);


    // imprime todos los alumnos con sus notas
    profesor->imprimirAlumnos();

    profesor->imprimirAlumnoMejorNota();

//    cout << "**********************************************************"<< endl;

//    cout << "alumno " + alumno3->getNombre() << endl;
//    alumno3->obtenerNotas();
//    cout << "numero de notas " ;
//    alumno3->devolverNumNotas();





}

