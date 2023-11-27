#include <iostream>
#include "Persona.h"
#include "Profesor.h"
#include "Estudiante.h"

#include <vector>
#include <typeinfo>


using namespace std;

int main() {


    vector<Persona*> personas;
    Profesor* prof = new Profesor("Raúl Pérez",45, "Matemáticas");
    personas.push_back(prof);

  Estudiante* est = new Estudiante("Paola Vera",18, "Humanidades");
  personas.push_back(est);
  
    cout << "------------ PROFESOR ------------" << endl;
    cout << prof->toString();

    cout << "------------  ALUMNO ------------" << endl;
    cout << est->toString();

    return 0;
}
