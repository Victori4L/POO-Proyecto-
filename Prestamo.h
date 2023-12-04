
//clase prestamo.h 
#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <string>
#include <iostream>
#include "Usuario.h"  
#include "Libro.h" 
#include <vector>
using namespace std;

class Prestamo {
  private:
    Usuario usuario;    
    vector<Libro> libros;     
    string fechaPrestamo;
    string fechaDevolucion;

  public:
    Prestamo();
    Prestamo(Usuario _usuario , vector<Libro> _libros,string _fechaPrestamo, string _fechaDevolucion);

    Usuario getUsuario();
    void setUsuario(Usuario _usuario);

    vector<Libro> getLibros();
    string getFechaPrestamo();
    string getFechaDevolucion();


    void setLibros(vector<Libro> _libro);
    void setFechaPrestamo(string _fechaPrestamo);
    void setFechaDevolucion(string _fechaDevolucion);
    void anadirLibro(Libro _libro); 
int buscarLibro(string _isbn); 
void eliminarLibro(string _isbn); 
    void mostrarInformacionPrestamo();
};


Prestamo::Prestamo()
{  
  fechaPrestamo="";                            
  fechaDevolucion="";
}

 Prestamo::Prestamo(Usuario _usuario , vector<Libro> _libros,string _fechaPrestamo, string _fechaDevolucion)
{                       
  usuario=_usuario;
  libros =_libros;
  fechaPrestamo=_fechaPrestamo;                            
  fechaDevolucion=_fechaDevolucion;
}

Usuario Prestamo::getUsuario() {
    return usuario;
}

string Prestamo::getFechaPrestamo() {
    return fechaPrestamo;
}
string Prestamo::getFechaDevolucion() {
    return fechaDevolucion;
}
//setters 
void Prestamo::setUsuario(Usuario _usuario){
  usuario=_usuario;
}

void Prestamo::setFechaPrestamo(string _fechaPrestamo){
  fechaPrestamo=_fechaPrestamo;
}

void Prestamo::setFechaDevolucion(string _fechaDevolucion){
  fechaDevolucion=_fechaDevolucion;
}


void Prestamo::mostrarInformacionPrestamo() {
    cout << "Información del préstamo:" << endl;
    cout << "Usuario: " << usuario.getNombre() << endl;
    for (auto libro : libros) {
        libro.mostrarInformacionLibro();
    }
    cout << "Fecha de Préstamo: " << fechaPrestamo << endl;
    cout << "Fecha de Devolución: " << fechaDevolucion << endl;
}

void Prestamo::anadirLibro(Libro libro) 
{
   cout << "Añado Libro" << endl;
  libros.push_back(libro);
   cout << libros.size() << endl;
}

int Prestamo::buscarLibro(string _isbn) {
   cout << libros.size() << endl;
    for(int i = 0; i < libros.size(); i++) {
      cout << libros[i].getIsbn() << endl;
        if(libros[i].getIsbn() == _isbn) {
            return i;
        }
    }

    return -1;
}

void Prestamo::eliminarLibro(string _isbn) {
    int posicion = buscarLibro(_isbn);

    if(posicion != -1) {
      libros.erase(libros.begin() + posicion);     
    }
}


#endif