//Clase libro Fisico.h 
#ifndef LIBROFISICO_H
#define LIBROFISICO_H

#include <string>
#include <iostream>
#include "Libro.h"
using namespace std;

class LibroFisico:public Libro 
{
  private:
      string tipoPasta;
      string tipoPapel;
  public:

LibroFisico(); 
LibroFisico(string , string , int , string,string , string );

  string getTipoPasta();
  string getTipoPapel();
  void setTipoPasta (string);
  void setTipoPapel (string);
};

LibroFisico::LibroFisico(string _titulo, string _autor, int _anio, string _ISBN,string _tipoPasta, string _tipoPapel):
Libro(_titulo,_autor,_anio,_ISBN){
    tipoPasta=_tipoPasta;
    tipoPapel=_tipoPapel;
}
string LibroFisico::getTipoPasta (){
  return tipoPasta;
}
string LibroFisico::getTipoPapel (){
  return tipoPapel;
}
void LibroFisico::setTipoPasta(string _tipoPasta){
  tipoPasta=_tipoPasta;
}
void LibroFisico::setTipoPapel (string _tipoPapel){
  tipoPapel=_tipoPapel;
}

#endif 