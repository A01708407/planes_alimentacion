#ifndef PACIENTE_H
#define PACIENTE_H

#include "Dieta.h"
#include "Medida.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Paciente {
private:
    int edad;
    int sexo;
    Medida medidas; 
    vector<string> alergias;
    string nombre;
    float estatura;
    float peso;     
    vector<Dieta> dietas;

public:
    // Constructores
    Paciente() {
        edad = 0;
        sexo = 0;
        nombre = "";
        estatura = 0;
        peso = 0;
    }

    Paciente(int _edad, int _sexo, const vector<string>& _alergias, const string& _nombre, float _estatura, float _peso){
        edad = _edad;
        sexo = _sexo;
        alergias = _alergias;
        nombre = _nombre;
        estatura = _estatura;
        peso = _peso;
    }

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

    void set_medidas(const Medida& _medidas) {
        medidas = _medidas;
    }

    void set_alergias(const vector<string>& _alergias) {
        alergias = _alergias;
    }

    void set_nombre(const string& _nombre) {
        nombre = _nombre;
    }

    void set_estatura(float _estatura) {
        estatura = _estatura;
    }

    void set_peso(float _peso) {
        peso = _peso;
    }

    void set_dietas(const vector<Dieta>& _dietas) {
        dietas = _dietas;
    }

    void imprime_datos() const {
        cout << "Nombre: " << nombre << endl
             << "Edad: " << edad << " años" << endl
             << "Sexo: " << (sexo == 0 ? "Femenino" : "Masculino") << endl
             << "Estatura: " << estatura << " m" << endl
             << "Peso: " << peso << " kg" << endl
             << "Alergias: ";
        for (const auto& alergia : alergias) cout << alergia << " ";
        cout << endl;
        medidas.imprime();
        cout << "Dietas: ";
        for (const auto& dieta : dietas) cout << dieta.get_nombre() << " ";
        cout << endl;
    }

    float calcular_IMC() const { 
        return peso / (estatura * estatura); 
    }

    void actualizar_informacion(int _edad, int _sexo, const vector<string>& _alergias, const string& _nombre, float _estatura, float _peso, const vector<Dieta>& _dietas) {
        edad = _edad;
        sexo = _sexo;
        alergias = _alergias;
        nombre = _nombre;
        estatura = _estatura;
        peso = _peso;
        dietas = _dietas;
    }

    void agregar_alergia(const string& _alergia) { 
        alergias.push_back(_alergia); 
    }

    void eliminar_alergia(const string& alergia) {
        auto it = find(alergias.begin(), alergias.end(), alergia);
        if (it != alergias.end()) alergias.erase(it);
    }

    void agregar_dieta(const Dieta& dieta) { 
        dietas.push_back(dieta); 
    }

    void eliminar_dieta(const Dieta& dieta) {
        auto it = find(dietas.begin(), dietas.end(), dieta);
        if (it != dietas.end()) dietas.erase(it);
    }

    void cambiar_medidas(float _cintura, float _pecho, float _cadera) {
        medidas = Medida(_cintura, _pecho, _cadera);
    }
};

#endif