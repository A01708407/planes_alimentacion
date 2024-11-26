#ifndef DIETA_H
#define DIETA_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Dieta {
private:
    string nombre;
    vector<string> alimentos;
    string fecha_creacion;

public:
    // Constructor por parámetros
    Dieta(string _nombre, vector<string> _alimentos, string _fecha_creacion) {
        nombre = _nombre;
        alimentos = _alimentos;
        fecha_creacion = _fecha_creacion;
    }

    // Getters
    string get_nombre() {
        return nombre;
    }

    vector<string> get_alimentos() {
        return alimentos;
    }

    string get_fecha_creacion() {
        return fecha_creacion;
    }

    // Setters
    void set_nombre(string _nombre) {
        nombre = _nombre;
    }

    void set_alimentos(vector<string> _alimentos) {
        alimentos = _alimentos;
    }

    void set_fecha_creacion(string _fecha_creacion) {
        fecha_creacion = _fecha_creacion;
    }

    // Métodos
    void imprime_datos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Alimentos: ";
        for (const string& alimento : alimentos) {
            cout << alimento << " ";
        }
        cout << endl;
        cout << "Fecha de creación: " << fecha_creacion << endl;
    }

    string descripcion_dieta() {
        if (nombre == "cetogénica") return "Dieta baja en carbohidratos y alta en grasas.";
        if (nombre == "baja de peso") return "Dieta enfocada en la reducción de peso.";
        if (nombre == "vegana") return "Dieta que excluye todos los productos de origen animal.";
        if (nombre == "vegetariana") return "Dieta que excluye la carne y el pescado.";
        return "Descripción no disponible para este tipo de dieta.";
    }

    void agregar_alimento(string alimento) {
        alimentos.push_back(alimento);
    }

    void eliminar_alimento(string alimento) {
        auto it = find(alimentos.begin(), alimentos.end(), alimento);
        if (it != alimentos.end()) {
            alimentos.erase(it);
        }
    }
};

#endif
