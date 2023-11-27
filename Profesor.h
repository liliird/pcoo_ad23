#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <sstream>
#include "Persona.h"

using namespace std;

class Profesor: public Persona {

    private:
        string curso;

    public:
        Profesor();
        Profesor(string, int, string);
 
        string getCurso();
        void setCurso(string);
        string toString();
};

Profesor::Profesor() {
    curso="";
}


Profesor::Profesor(string _nombre, int _edad, string _curso):
    Persona(_nombre, _edad) {
        curso = _curso;
}

string Profesor::getCurso() {
    return curso;
}

void Profesor::setCurso(string _curso) {
    curso = _curso;
}


string Profesor::toString() {
    ostringstream salida;
    // Es posible invocar el método de la clase padre para extender su funcionalidad
    salida << Persona::toString();
    salida << "Curso impartido: " << curso << endl;

    return salida.str();
}

#endif
