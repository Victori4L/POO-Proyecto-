//Clase libro 
#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
#include "Editorial.h"  
using namespace std;

class Libro 
{
  private:
      string titulo;
      string autor;
      int anioPublicacion;
      Editorial editorial; 
  public:
 //constructores con parametros 
  Libro(string t, string a, int anio, string nombreEditorial, string ubicacionEditorial) {
      titulo=t;
      autor=a;
      anioPublicacion=anio;

  }
//Getters 
  string getTitulo();
  string getAutor();
  int getAnioPublicacion();
  //Setters 
  void setTitulo (string);
  void setAutor (string);
  void setAnioPublicacion (int);
  void mostrarInformacion ();
};

string Libro::getTitulo (){
  return titulo;
}
string Libro::getAutor (){
  return autor;
}
int Libro::getAnioPublicacion (){
  return anioPublicacion; 
}
void Libro::setTitulo(string t){
  titulo=t;
}
void Libro::setAutor (string a){
  autor=a;
}
void Libro::setAnioPublicacion (int anio){
  anioPublicacion=anio;
}

void Libro::mostrarInformacion() {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año de publicación: " << anioPublicacion << endl;
    editorial.mostrarInformacionEditorial(); 
#endif 
