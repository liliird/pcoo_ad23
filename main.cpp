/*
Lilian Rodríguez Uribe
A01711949
*/

/*
El siguiente código despliega un menú que permite mostrar y agregar profesores y alumnos a una escuela.
*/

#include <iostream> 
#include "Persona.h" 
#include "Escuela.h"

using namespace std;

void menu(){
    cout << "Menu:"<< endl;
    cout << "1. Mostrar Profesores."<< endl;
    cout << "2. Mostrar Alumnos."<< endl;
    cout << "3. Agregar Profesor."<< endl;
    cout << "4. Agregar Alumno."<< endl;
    cout << "5. Salir."<< endl;
}

int main(int argc, char* argv[]){

    Escuela escuela;
    escuela.creaEjProfesores();
    escuela.creaEjAlumnos();
    string new_nombre;
    string new_correo;
    string new_cursoI;
    string new_cursoT;
    string new_matricula;

    int opcion = 0;

    //Ciclo para que el codigo siga corriendo mientras no elija la opcion salir.
    while(opcion < 5 && opcion > -1){

      //Se imprime el menú
      menu();
      //Leer la opción del menú
      cin >> opcion;

      //Dependiendo la opción se ejecuta una acción
      switch(opcion){

        //Caso 1 que imprime los Profesores
        case 1:
          escuela.muestraProfesor();
          break;

        //Caso 2 que imprime los Alumnos
        case 2:
          escuela.muestraAlumno();
          break;

        //Caso 3 que agrega un Profesor
        case 3:
          cout<< "Nombre: " ;
          cin >> new_nombre;
          cout<< "Correo: " ;
          cin >> new_correo;
          cout<< "Curso que imparte: " ;
          cin >> new_cursoI;
          escuela.agregaProfesores(new_nombre, new_correo, new_cursoI);
          break;

        //Caso 3 que agrega un Alumno
        case 4:
          cout<< "Nombre: " ;
          cin >> new_nombre;
          cout<< "Matricula: " ;
          cin >> new_matricula;
          cout<< "Correo: " ;
          cin >> new_correo;
          cout<< "Curso que toma: " ;
          cin >> new_cursoT;
          escuela.agregaAlumnos(new_nombre, new_correo, new_matricula, new_cursoT);
          break;
      }
    }
}
