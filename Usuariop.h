//clase usuario 
#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <iostream>
using namespace std;

class Usuario {
private:
    string nombre;
    string direccion;
    int edad;

public:
    Usuario(string n, string d, int e);
    string getNombre() const;
    string getDireccion() const;
    int getEdad() const;
    void mostrarInformacion() const;
};


Usuario::Usuario(string n, string d, int e) : nombre(n), direccion(d), edad(e) {}

string Usuario::getNombre() const {
    return nombre;
}

string Usuario::getDireccion() const {
    return direccion;
}

int Usuario::getEdad() const {
    return edad;
}

void Usuario::mostrarInformacion() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Edad: " << edad << " años" << endl;
}

#endif 