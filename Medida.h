#ifndef MEDIDA_H
#define MEDIDA_H

#include <iostream>
using namespace std;

class Medida {
private:
    float cintura;
    float pecho;
    float cadera;

public:
    // Constructor por parámetros
    Medida(float _cintura, float _pecho, float _cadera) {
        cintura = _cintura;
        pecho = _pecho;
        cadera = _cadera;
    }

    // Constructor por defecto
    Medida() : cintura(0), pecho(0), cadera(0) {}

    // Getters
    float get_cintura() const {
        return cintura;
    }

    float get_pecho() const {
        return pecho;
    }

    float get_cadera() const {
        return cadera;
    }

    // Setters
    void set_cintura(float _cintura) {
        cintura = _cintura;
    }

    void set_pecho(float _pecho) {
        pecho = _pecho;
    }

    void set_cadera(float _cadera) {
        cadera = _cadera;
    }

    // Métodos
    void imprime() const {
        cout << "Cintura: " << cintura << " cm" << endl;
        cout << "Pecho: " << pecho << " cm" << endl;
        cout << "Cadera: " << cadera << " cm" << endl;
    }

    float calcular_IMC() const {
        // Un método para calcular el IMC basado en las medidas
        return 0;
    }

    void actualizar_medidas(float _cintura, float _pecho, float _cadera) {
        cintura = _cintura;
        pecho = _pecho;
        cadera = _cadera;
    }
};

#endif
