#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <sstream>
#include "Persona.h"

using namespace std;

class Estudiante: public Persona {

    private:
        string curso;

    public:
        Estudiante();
        Estudiante(string, int, string);

        string getCurso();
        void setCurso(string);
        string toString();
};

Estudiante::Estudiante() {
    curso = "";
}

Estudiante::Estudiante(string _nombre, int _edad, string _curso):
    Persona(_nombre, _edad) {
        curso = _curso;
}

string Estudiante::getCurso() {
    return curso;
}

void Estudiante::setCurso(string _curso) {
    curso = _curso;
}


string Estudiante::toString() {
    ostringstream salida;
    // Es posible invocar el método de la clase padre para extender su funcionalidad
    salida << Persona::toString();
    salida << "Curso: " << curso << endl;

    return salida.str();
}

#endif
