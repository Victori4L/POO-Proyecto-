#include <iostream>
#include <string>
#include "Biblioteca.h"
#include "Prestamo.h"

// Incluye otros archivos de encabezado necesarios, si los hay

using namespace std;

int main() {
 cout << "Hola" << endl;

  Libro libro1("El Principito", "Antoine de Saint-Exupéry", 1943, "1234567890");
  Usuario usuario1("Juan Pérez", "Calle Monterrey 123", 30);

  Prestamo prestamo1;
  prestamo1.setUsuario(usuario1);
  prestamo1.anadirLibro(libro1);
  prestamo1.setFechaPrestamo("2023-01-01");
  prestamo1.setFechaDevolucion("2023-01-15");

  // Crear biblioteca y registrar libro, usuario y préstamo
  Biblioteca biblioteca;
  biblioteca.agregarLibro(libro1);
  biblioteca.registrarUsuario(usuario1);
  biblioteca.registrarPrestamo(prestamo1);

  // Buscar un libro en la biblioteca por ISBN
  string isbnBuscado = "1234567890";
  biblioteca.buscarLibroPorISBN(isbnBuscado);
  prestamo1.mostrarInformacionPrestamo();
   return 0;
}

