#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    Libro(string t, string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getAnioPublicacion() const { return anioPublicacion; }

    void mostrarInformacion() const {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de publicación: " << anioPublicacion << endl;
    }
};

class Usuario {
private:
    string nombre;
    string direccion;
    int edad;

public:
    Usuario(string n, string d, int e) : nombre(n), direccion(d), edad(e) {}

    string getNombre() const { return nombre; }
    string getDireccion() const { return direccion; }
    int getEdad() const { return edad; }

    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

class Prestamo {
private:
    Libro libro;
    Usuario usuario;
    string fechaPrestamo;

public:
    Prestamo(Libro l, Usuario u, string fecha) : libro(l), usuario(u), fechaPrestamo(fecha) {}

    Libro getLibro() const { return libro; }
    Usuario getUsuario() const { return usuario; }
    string getFechaPrestamo() const { return fechaPrestamo; }

    void mostrarInformacion() const {
        cout << "Información del préstamo:" << endl;
        libro.mostrarInformacion();
        usuario.mostrarInformacion();
        cout << "Fecha de préstamo: " << fechaPrestamo << endl;
    }
};

int main() {
    Libro libro1("El Principito", " Antoine de Saint-Exupéry", 1943);
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
