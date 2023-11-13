// main.cpp

#include "Estudiante.h"
#include "Profesor.h"

int main() {
  // Crear instancias de Estudiante y Profesor
  Estudiante estudiante("Juan", 20, "Matemáticas");
  Profesor profesor("Diana", 35, "Física");

  // Invocar métodos
  estudiante.presentarse();
  estudiante.estudiar();

  profesor.presentarse();
  profesor.ensenar();

  return 0;
}
