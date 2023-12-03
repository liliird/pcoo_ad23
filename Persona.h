#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
#include <sstream>

using namespace std;


//Declaracion de clase Persona que es abstracta
class Persona {

    protected:
        //Declaro variables de instancia
        string nombre;
        string correo;


    public :
        //Declaro los métodos que va a tener el objeto
        Persona();
        Persona (string nombre, string correo);

        string getNombre() const;
        string getCorreo() const;
        string toString()const;
};

//Constructor por default

Persona::Persona(){
    nombre = "";
    correo="";

}

/*
Constructor donde recibe valores para llenar las variables de instancia
*/
Persona::Persona(string _nombre, string _correo){
    nombre = _nombre;
    correo=_correo;

}

//Getter de nombre y correo

string Persona::getNombre() const{
    return nombre;
}

string Persona::getCorreo() const{
    return correo;
}

/*
Almacenda los valores de las variables de instancia en una cadena de texto.
*/

string Persona::toString()const{
    stringstream salida;
    salida << "Nombre: "<< nombre;
    salida << "Correo electrónico: "<< correo;
    return salida.str();

}

//Declaro objeto profesor que hereda de Persona
class Profesor: public Persona{
    private:
        //Variables de instancia del objeto
        string cursoI;

    public:
        //Metodos del objeto
        Profesor();  //Constructores
        Profesor (string nombre, string correo, string cursoI);

        string getNombre()const;
        string getCorreo()const;
        string getCursoI()const;
        string toString();
};

//Constructor por default
 
Profesor::Profesor(){
    nombre = "";
    correo="";
    cursoI="";

}

//Constructor que recibe nombre, correo y curso que imparte el profesor
 
Profesor::Profesor(string _nombre, string _correo, string _cursoI){

    nombre = _nombre;
    correo=_correo;
    cursoI=_cursoI;

}

//Getters de nombre, correo y curso impartido

string Profesor::getNombre() const{
    return nombre;
}

string Profesor::getCorreo() const{
    return correo;
}

string Profesor::getCursoI() const{
    return cursoI;
}

/*
Almacena los valores de las variables de instancia en una cadena de texto
*/
string Profesor::toString(){
    stringstream salida;
    salida << "Nombre: "<< nombre << endl;
    salida << "Correo electrónico: "<< correo << endl;
    salida << "Curso que imparte: "<< cursoI << endl;
    return salida.str();
}

//Declaro objeto Alumno que hereda de Persona
class Alumno: public Persona{

    private:
        //Declaro las variables de instancia
        string matricula, cursoT;

    public :
        //Declaro metodos
        Alumno();
        Alumno (string nombre, string correo, string matricula, string cursoT);
        string getNombre()const;
        string getCorreo()const;
        string getMatricula()const;
        string getCursoT()const;
        string toString();

};

//Constructor por default

Alumno::Alumno(){
    nombre="";
    correo="";
    matricula="";
    cursoT="";
}

// Constructor que recibe nombre, correo, matricula y curso que toma el alumno.
 
Alumno::Alumno(string _nombre, string _correo, string _matricula, string _cursoT){
    nombre = _nombre;
    correo = _correo;
    matricula = _matricula;
    cursoT=_cursoT;
}

string Alumno::getNombre() const{
    return nombre;
}

string Alumno::getCorreo() const{
    return correo;
}

string Alumno::getMatricula() const{
    return matricula;
}

string Alumno::getCursoT() const{
    return cursoT;
}

/* Almacenda los valores de las variables de instancia en una cadena de texto.
*/

string Alumno::toString(){

    stringstream salida;
    salida << "Nombre: "<< nombre << endl;
    salida << "Correo: "<< correo << endl;
    salida << "Matricula: "<< matricula << endl;
    salida << "Curso que toma: "<< cursoT << endl;
    return salida.str();
}


#endif // PERSONA_H
