#ifndef DIETA_H
#define DIETA_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Dieta {
protected:
    string nombre;
    vector<string> alimentos;
    string fecha_creacion;

public:
    // Constructores
    Dieta() {
        nombre = "";
        fecha_creacion = "";
    }

    Dieta(string _nombre, vector<string> _alimentos, string _fecha_creacion) {
        nombre = _nombre;
        alimentos = _alimentos;
        fecha_creacion = _fecha_creacion;
        }

    // Getters
    string get_nombre() const { return nombre; }
    vector<string> get_alimentos() const { return alimentos; }
    string get_fecha_creacion() const { return fecha_creacion; }

    // Métodos
    virtual void imprime_datos() const {
        cout << "Nombre: " << nombre << endl
             << "Alimentos: ";
        for (const auto& alimento : alimentos) cout << alimento << " ";
        cout << endl
             << "Fecha de creación: " << fecha_creacion << endl;
    }

    virtual string descripcion_dieta() const { return ""; }

    void agregar_alimento(const string& alimento) { alimentos.push_back(alimento); }

    void eliminar_alimento(const string& alimento) {
        auto it = find(alimentos.begin(), alimentos.end(), alimento);
        if (it != alimentos.end()) alimentos.erase(it);
    }

    // Sobrecarga del operador ==
    bool operator==(const Dieta& other) const {
        return nombre == other.nombre && fecha_creacion == other.fecha_creacion;
    }

    virtual ~Dieta() = default; // Destructor virtual
};

#endif