#ifndef MEDIDA_H
#define MEDIDA_H

#include<iostream>

using namespace std;

class Medida {
    private:
        float cintura;
        float pecho;
        float cadera;

    public:
        // Constructor
        Medida(float _cintura, float _pecho, float _cadera) {
            cintura = _cintura;
            pecho = _pecho;
            cadera = _cadera;
        }

        Medida() {
            cintura = 0;
            pecho = 0;
            cadera = 0;
        }

        // Getters
        float get_cintura() {
            return cintura;
        }

        float get_pecho()  {
            return pecho;
        }

        float get_cadera() {
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
        void imprime() {
            cout << "Cintura: " << cintura << " cm" << endl;
            cout << "Pecho: " << pecho << " cm" << endl;
            cout << "Cadera: " << cadera << " cm" << endl;
        }
};

#endif
