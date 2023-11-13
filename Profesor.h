//Profesor.h

#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"
#include <iostream>

using namespace std;

class Profesor : public Persona {

  private:
    //Atributos
    string especialidad;
  
  public:
    // Constructor por omisión
    Profesor();
    Profesor(string nombre, int edad, string especialidad);
    // Método para enseñar
    void ensenar();
};

// Implementación de los métodos 
Profesor::Profesor(string nombre, int edad, string especialidad)
    : Persona(nombre, edad), especialidad(especialidad) {}

void Profesor::ensenar() {
    cout << getNombre() << " está enseñando la especialidad de " << especialidad << "." << std::endl;
}

#endif // PROFESOR_H
