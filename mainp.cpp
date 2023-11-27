#include "Librop.h"
#include "Usuariop.h"
#include "Prestamop.h"

int main() {
    Libro libro1("El Principito", "Antoine de Saint-Exupéry", 1943);
    Usuario usuario1("Juan Pérez", "Calle Principal 123", 25);
    Prestamo prestamo1(libro1, usuario1, "2023-11-08");

    cout << "Información del libro:" << endl;
    libro1.mostrarInformacion();

    cout << "\nInformación del usuario:" << endl;
    usuario1.mostrarInformacion();

    cout << "\nInformación del préstamo:" << endl;
    prestamo1.mostrarInformacion();

    return 0;
}

