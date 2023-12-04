//clase bblioteca.h 
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include <iostream>
#include <vector>
#include "Libro.h"
#include "Usuario.h"
#include "Prestamo.h"
using namespace std;

class Biblioteca {
  private:
    vector<Libro> libros;        
    vector<Usuario> usuarios;    
    vector<Prestamo> prestamos;  
    Prestamo prestamo;

  public:
    Biblioteca();
    Biblioteca(vector<Libro> libros,vector<Usuario> usuarios,vector<Prestamo> prestamos);
    void agregarLibro(Libro _nuevoLibro);
    void registrarUsuario(Usuario _nuevoUsuario);
    void registrarPrestamo(Prestamo _nuevoPrestamo);
    void buscarLibroPorISBN(string _isbn);
};



Biblioteca::Biblioteca()
{
}

Biblioteca::Biblioteca(vector<Libro> _libros,vector<Usuario> _usuarios,vector<Prestamo> _prestamos)
{
  libros = _libros;
  usuarios = _usuarios;
  prestamos = _prestamos;
}


void Biblioteca::agregarLibro(Libro nuevoLibro) {
     cout << "Agrego Libro" << endl;
    libros.push_back(nuevoLibro);
   cout << libros.size() << endl;
}

void Biblioteca::registrarUsuario(Usuario nuevoUsuario) {
    usuarios.push_back(nuevoUsuario);
}

void Biblioteca::registrarPrestamo(Prestamo nuevoPrestamo) {
    prestamos.push_back(nuevoPrestamo);
}

void Biblioteca::buscarLibroPorISBN(string _isbn) {
   cout << libros.size() << endl;
    for(int i = 0; i < libros.size(); i++) {
      cout << libros[i].getIsbn() << endl;
        if(libros[i].getIsbn() == _isbn) {
           cout << "Libro encontrado." << endl;
        
        }
    }  
  }

#endif