#ifndef DIETA_H
#define DIETA_H

#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::remove
using namespace std;

class Dieta {
private:
    string nombre;
    string alimentos;
    string fecha_creacion;

public:
    // Constructor por parámetros
    Dieta(string _nombre, string _alimentos, string _fecha_creacion) {
        nombre = _nombre;
        alimentos = _alimentos;
        fecha_creacion = _fecha_creacion;
    }

    // Getters
    string get_nombre() {
        return nombre;
    }

    string get_alimentos() {
        return alimentos;
    }

    string get_fecha_creacion() {
        return fecha_creacion;
    }

    // Setters
    void set_nombre(string _nombre) {
        nombre = _nombre;
    }

    void set_alimentos(string _alimentos) {
        alimentos = _alimentos;
    }

    void set_fecha_creacion(string _fecha_creacion) {
        fecha_creacion = _fecha_creacion;
    }

    // Métodos
    void imprime_datos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Alimentos: " << alimentos << endl;
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
        alimentos += ", " + alimento;  // Concatenar el nuevo alimento a la cadena
    }

    void eliminar_alimento(string alimento) {
        size_t pos = alimentos.find(alimento);
        if (pos != string::npos) {
            alimentos.erase(pos, alimento.length());
        }
    }
};

#endif