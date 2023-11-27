class ItemBiblioteca {
protected:
    string titulo;
    int anioPublicacion;

public:
    ItemBiblioteca(string t, int anio) : titulo(t), anioPublicacion(anio) {}
    virtual void mostrarInformacion() const {
        cout << "Título: " << titulo << endl;
        cout << "Año de publicación: " << anioPublicacion << endl;
    }
};

class Libro : public ItemBiblioteca {
private:
    string autor;

public:
    Libro(string t, string a, int anio) : ItemBiblioteca(t, anio), autor(a) {}
    void mostrarInformacion() const override {
        ItemBiblioteca::mostrarInformacion();
        cout << "Autor: " << autor << endl;
    }
};
