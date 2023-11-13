//Persona.h
#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

using namespace std;

class Persona {

  private:
    //Atributos
    string nombre;
    int edad;

  public:
    //Constructor por omisión
    Persona();
    Persona(string nombre, int edad);
    
    // Getters para acceder a las variables privadas
    string getNombre();
    int getEdad();

    //Setter para un método de presentarse
    void presentarse();
};

// Implementación de los métodos 
Persona::Persona(string nom, int ed) {
  nombre=nom;
  edad=ed;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

void Persona::presentarse() {
    cout << "Hola, soy " << nombre << " y tengo " << edad << " años." <<endl;
}

#endif // PERSONA_H
