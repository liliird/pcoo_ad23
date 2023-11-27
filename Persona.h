#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <sstream> // Permite construir strings formateados como si fuera cout

using namespace std;

class Persona {
    
    //Atributos accesibles en los métodos de las clases hijas
    
    protected:
        string nombre;
        int edad;

    public:
        Persona();
        Persona(string, int);
        string getNombre();
        int getEdad();

        void setNombre(string);
        void setEdad(int);

        virtual string toString();
        // Este método son virtuales porque cada subclase debe implementarlos de acuerdo a sus restricciones
        
};

Persona::Persona() {
    nombre = "";
    edad = 0;
}

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad= _edad;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setNombre(string _nombre) {
    nombre = _nombre;
}

void Persona::setEdad(int _edad) {
    edad = _edad;
}

// Este método debe ser sobreescrito en las clases hijas ya que es un método virtual
string Persona::toString() {
    ostringstream salida;
    salida << "Nombre: " << nombre << endl;
    salida << "Edad: " << edad << endl;
    return salida.str();
}

#endif
