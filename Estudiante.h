//Estudiante.h

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
#include <iostream>

using namespace std;

class Estudiante : public Persona {

private:
//Atributos
string curso;

public:
    //Constructor por omisión
    Estudiante();
    Estudiante(string nombre, int edad, string curso);

    // Método para estudiar
    void estudiar();

};

// Implementación de los métodos 
Estudiante::Estudiante(string nombre, int edad, string curso)
    : Persona(nombre, edad), curso(curso) {}

void Estudiante::estudiar() {
    cout << getNombre() << " está estudiando el curso de " << curso << "." << endl;
}

#endif // ESTUDIANTE_H
