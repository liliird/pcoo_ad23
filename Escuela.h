#ifndef ESCUELA_H
#define ESCUELA_H
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#include "Persona.h"
const int MAX = 100; //constante de tamaño de arreglos

class Escuela {

    private:
        //Declara las variables de instancia
        Profesor prof[MAX];
        Alumno alum[MAX];
        int iprof, ialum;

    public :
        //Constuctor
        Escuela();
        // Metodos miembros de la clase
        void creaEjProfesores();
        void creaEjAlumnos();
        void muestraProfesor();
        void muestraAlumno();
        void agregaProfesores(string nombre, string correo, string cursoI);
        void agregaAlumnos(string nombre, string correo, string matricula, string cursoT);


};

// Constructor por default
 
Escuela::Escuela(){

    iprof = 0;
    ialum = 0;
}

/*
 Utliza el arreglo de tipo Profesor y crea 2 alumnos
 con identificador de 1 a 99.
*/
void Escuela::creaEjProfesores(){

    //Cada espacio de arreglo tiene diferente objeto y manda como parametro sus variables instancia
    prof[0] = Profesor("Erik Sánchez", "ejsanchez@tec.mx", "Pensamiento computacional y programación");
    iprof += 1;
    prof[1] = Profesor("Eloina Rodríguez", "eloina.rodriguez@tec.mx","Modelación computacional aplicando leyes de conservación");

}

/*
  Utiliza el arreglo de tipo Alumno y crea 2 ejemplos con indicador del 100 al 199.
*/
void Escuela::creaEjAlumnos(){

    alum[0] = Alumno("Lilian Rodríguez", "A01711949@tec.mx", "A01711949","Pensamiento computacional");
    ialum += 1;
    alum[1] = Alumno("Angel Rodríguez","A01659140@tec.mx", "A01659140", "Química");

}

/*
Utiliza el arreglo Profesor y su indice e imprimie cada uno de los objetos que pertenecen al mismo.
 
*/
void Escuela::muestraProfesor(){
  //recorre el arreglo e imprime cada objeto.
    for(int i = 0 ; i <= iprof ; i++){
        cout << prof[i].toString();
    }

}

/*
Utiliza el arreglo Alumno y su indice e imprimie cada uno de los objetos que pertenecen al mismo.
*/
void Escuela::muestraAlumno(){
    for(int i = 0 ; i <= ialum ; i++){
        cout << alum[i].toString();
    }

}

/*
 Utiliza arreglo de Profesor y su ultimo indice.
 Recibe el nombre, correo,  y curso que imparte
 El metodo crea el objeto Profesor y lo agrega al arreglo
 */
void Escuela::agregaProfesores(string nombre, string correo, string cursoI){
    iprof += 1;
    Profesor salida(nombre, correo, cursoI);
    prof[iprof] = salida;

}

/*
 Utiliza arreglo de Alumno y su ultimo indice.
 Recibe el nombre, correo, matricula y curso que toma
 El metodo crea el objeto Alumno y lo agrega al arreglo
 */
void Escuela::agregaAlumnos(string nombre, string correo, string matricula, string cursoT){

    ialum += 1;
    Alumno salida(nombre, correo, matricula, cursoT);
    alum[ialum] = salida;

}

#endif // ESCUELA_H_
