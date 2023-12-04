//Clase libro Electronico.h 
#ifndef LIBROELECTRONICO_H
#define LIBROELECTRONICO_H

#include <string>
#include <iostream>
#include "Libro.h"
using namespace std;

class LibroElectronico:public Libro 
{
  private:
      string url;
      string tipoFormato;
  public:
  LibroElectronico(); 
  LibroElectronico(string , string , int , string,string , string );
  string getUrl();
  string getTipoFormato();
  void setUrl (string);
  void setTipoFormato (string);
};

LibroElectronico::LibroElectronico(string _titulo, string _autor, int _anio, string _ISBN,string _url, string _tipoFormato):
  Libro(_titulo,_autor,_anio,_ISBN){
       url=_url;
      tipoFormato=_tipoFormato;
}

//Getters 
string LibroElectronico::getUrl (){
  return url;
}
string LibroElectronico::getTipoFormato (){
  return tipoFormato;
}
//Setters 
void LibroElectronico::setUrl(string _url){
  url=_url;
}
void LibroElectronico::setTipoFormato (string _tipoFormato){
  tipoFormato=_tipoFormato;
}


#endif 