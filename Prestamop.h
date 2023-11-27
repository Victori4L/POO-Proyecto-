#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "Librop.h"
#include "Usuariop.h"
#include <string>
#include <iostream>

using namespace std;

class Prestamo {
private:
    Libro libro;
    Usuario usuario;
    string fechaPrestamo;

public:
    Prestamo(Libro l, Usuario u, string fecha);
    Libro getLibro() const;
    Usuario getUsuario() const;
    string getFechaPrestamo() const;
    void mostrarInformacion() const;
};

Prestamo::Prestamo(const Libro& l, const Usuario& u, string fecha) 
: libro(l), usuario(u), fechaPrestamo(fecha) {}


Libro Prestamo::getLibro() const {
    return libro;
}

Usuario Prestamo::getUsuario() const {
    return usuario;
}

string Prestamo::getFechaPrestamo() const {
    return fechaPrestamo;
}

void Prestamo::mostrarInformacion() const {
    cout << "Información del préstamo:" << endl;
    libro.mostrarInformacion();
    usuario.mostrarInformacion();
    cout << "Fecha de préstamo: " << fechaPrestamo << endl;
}

#endif 
