//Clase libro .h 
#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Libro 
{
  protected:
      string titulo;
      string autor;
      int anioPublicacion;
      string isbn;

  public:
    Libro();
    Libro(string _titulo, string _autor, int _anioPublicacion, string _isbn);
    string getTitulo();
    void setTitulo (string _titulo);
    string getAutor();
    void setAutor (string _autor);
    int getAnioPublicacion();
    void setAnioPublicacion (int _anioPublicacion);
    string getIsbn ();
    void setIsbn(string _isbn);    
    void mostrarInformacionLibro();
    vector<Libro> ListaLibros();

};

 Libro::Libro()
 {
   titulo="";
   autor="";
   anioPublicacion=0;
   isbn="";
 }

 Libro::Libro(string _titulo, string _autor, int _anioPublicacion, string _isbn){
    titulo=_titulo;
    autor=_autor;
    anioPublicacion=_anioPublicacion;
    isbn=_isbn;
}

//Getters 
string Libro::getTitulo (){
  return titulo;
}
string Libro::getAutor (){
  return autor;
}
int Libro::getAnioPublicacion (){
  return anioPublicacion; 
}
string Libro::getIsbn (){
  return isbn; 
}
//Setters 
void Libro::setTitulo(string _titulo){
  titulo=_titulo;
}
void Libro::setAutor (string _autor){
  autor=_autor;
}
void Libro::setAnioPublicacion (int _anioPublicacion){
  anioPublicacion=_anioPublicacion;
}
void Libro::setIsbn (string _isbn){
  isbn=_isbn;
}


void Libro::mostrarInformacionLibro() {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año de publicación: " << anioPublicacion << endl;
    cout << "ISBN: " << isbn << endl;
}

vector<Libro> Libro::ListaLibros()
{
  vector<Libro> Libros;
  Libro libro1("Mi libro","Yo", 2005,"1234");
  Libros.push_back(libro1);

  Libro libro2("Mi libro","Yo", 2005,"1234");
  Libros.push_back(libro2);

  Libro libro3("El Principito", "Antoine de Saint-Exupéry", 1943, "1234567890");
  Libros.push_back(libro3);

  return Libros;
}

#endif 