//clase usuario.h 
#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <iostream>
#include <vector>
class Prestamo;
using namespace std;

class Usuario {
  private:   
      string nombre;
      string direccion;
      int edad;   
  public:
    Usuario ();
    Usuario(string _nombre, string _direccion, int _edad);
    string getNombre();
    string getDireccion();
    int getEdad();
    void setNombre(string _nombre);
    void setDireccion(string _direccion);
    void setEdad(int _edad);  
    void mostrarInformacionUsuario();
};

Usuario::Usuario()
{
  nombre="";
  direccion="";
  edad=0;
}

Usuario::Usuario(string _nombre, string _direccion, int _edad){
  nombre=_nombre;
  direccion=_direccion;
  edad=_edad;
}
//getters 
string Usuario::getNombre(){
    return nombre;
}

string Usuario::getDireccion() {
    return direccion;
}

int Usuario::getEdad() {
    return edad;
}
//setters 
void Usuario::setNombre(string _nombre){
  nombre=_nombre;
}
void Usuario::setDireccion(string _direccion){
  direccion=_direccion;
}
void Usuario::setEdad(int _edad){
  edad=_edad;
}

// ?
void Usuario::mostrarInformacionUsuario() {
    cout << "Nombre: " << nombre << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Edad: " << edad << " años" << endl;  
}

#endif 