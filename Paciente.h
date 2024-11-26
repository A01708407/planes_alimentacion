#ifndef PACIENTE_H
#define PACIENTE_H

#include "Dieta.h"
#include "Medida.h"
#include <iostream>
#include <vector>
using namespace std;

class Paciente {
private:
    int edad;
    int sexo;
    Medida medidas; // Composición
    vector<string> alergias;
    string nombre;
    float estatura; // metros
    float peso;
    vector<Dieta> dietas; // Agregación

public:
    // Constructor por defecto
    Paciente() {}

    // Getters
    int get_edad() {
        return edad;
    }

    int get_sexo() {
        return sexo;
    }

    Medida get_medidas() {
        return medidas;
    }

    vector<string> get_alergias() {
        return alergias;
    }

    string get_nombre() {
        return nombre;
    }

    float get_estatura() {
        return estatura;
    }

    float get_peso() {
        return peso;
    }

    vector<Dieta> get_dietas() {
        return dietas;
    }

    // Setters
    void set_edad(int _edad) {
        edad = _edad;
    }

    void set_sexo(int _sexo) {
        sexo = _sexo;
    }

    void set_medidas(Medida _medidas) {
        medidas = _medidas;
    }

    void set_alergias(vector<string> _alergias) {
        alergias = _alergias;
    }

    void set_nombre(string _nombre) {
        nombre = _nombre;
    }

    void set_estatura(float _estatura) {
        estatura = _estatura;
    }

    void set_peso(float _peso) {
        peso = _peso;
    }

    void set_dietas(vector<Dieta> _dietas) {
        dietas = _dietas;
    }

    // Métodos
    void imprime_datos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Sexo: " << (sexo == 0 ? "Femenino" : "Masculino") << endl;
        cout << "Estatura: " << estatura << " m" << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Alergias: ";
        for (string& alergia : alergias) {
            cout << alergia << " ";
        }
        cout << endl;
        medidas.imprime();
        cout << "Dietas: ";
        for (Dieta& dieta : dietas) {
            cout << dieta.get_nombre() << " ";
        }
        cout << endl;
    }

    float calcular_IMC() {
        return peso / (estatura * estatura);
    }

    void actualizar_informacion(int _edad, int _sexo, Medida _medidas, vector<string> _alergias, string _nombre, float _estatura, float _peso, vector<Dieta> _dietas) {
        edad = _edad;
        sexo = _sexo;
        medidas = _medidas;
        alergias = _alergias;
        nombre = _nombre;
        estatura = _estatura;
        peso = _peso;
        dietas = _dietas;
    }

    void agregar_alergia(string _alergia) {
        alergias.push_back(_alergia);
    }

    void agregar_dieta(Dieta _dieta) {
        dietas.push_back(_dieta);
    }

    // Composición
    Dieta agregar_dieta(string _nombre, vector<string> _alimentos, string _fecha_creacion) {
        Dieta nueva = Dieta(_nombre, _alimentos, _fecha_creacion);
        dietas.push_back(nueva);
        return nueva;
    }

    void eliminar_dieta(int indice) {
        dietas.erase(dietas.begin() + indice);
    }
};

#endif
