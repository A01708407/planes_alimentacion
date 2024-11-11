#ifndef PACIENTE_H
#define PACIENTE_H

#include "Medida.h"

#include<iostream>

using namespace std;

class Paciente {
    private:
        float peso;
        int edad;
        string alergias;
        string nombre;
        float estatura; //metros
        Medida medidas;
    
    public:
        //Constructor
        Paciente(float _peso, int _edad, string _alergias, string _nombre, float _estatura,
        Medida _medidas) {
            peso = _peso;
            edad = _edad;
            alergias = _alergias;
            nombre = _nombre;
            estatura = _estatura;
            medidas = _medidas;
        }

        // Getters
        float get_peso() const {
            return peso;
        }
        
        int get_edad() const {
            return edad;
        }

        string get_alergias() const {
            return alergias;
        }

        string get_nombre() const {
            return nombre;
        }

        float get_estatura() const {
            return estatura;
        }

        Medida get_medidas() const {
            return medidas;
        }

        // Setters
        void set_peso(float _peso) {
            peso = _peso;
        }

        void set_edad(int _edad) {
            edad = _edad;
        }

        void set_alergias(string _alergias) {
            alergias = _alergias;
        }

        void set_nombre(string _nombre) {
            nombre = _nombre;
        }

        void set_estatura(float _estatura) {
            estatura = _estatura;
        }

        void set_medidas(Medida _medidas) {
            medidas = _medidas;
        }

        //Métodos
        void imprime_datos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << " años" << endl;
            cout << "Peso: " << peso << " kg" << endl;
            cout << "Estatura: " << estatura << " m" << endl;
            cout << "Alergias: " << alergias << endl;
            medidas.imprime();
        }
};

#endif