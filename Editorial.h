class Editorial {
private:
    string nombre;
    string ubicacion;

public:
    Editorial(string nombre, string ubicacion) : nombre(nombre), ubicacion(ubicacion) {}

    void mostrarInformacionEditorial() const {
        cout << "Editorial: " << nombre << endl;
        cout << "Ubicación: " << ubicacion << endl;
    }
};
