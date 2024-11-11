#ifndef DIETA_H
#define DIETA_H

#include<iostream>

using namespace std;

class Dieta {
    private:
        string tipo; //Tipo de dieta (cetogénica, baja de peso, etc)
    
    public:
        //Constructor por parámetros
        Dieta(string type) {
            tipo = type;
        }
        
        //Getters
        string get_tipo() {
            return tipo;
        }

        //Setters
        void set_tipo(string type) {
            tipo = type;
        }

        //Métodos
        void imprime_datos() {
            cout << "Tipo" << tipo << endl;
        }

        string descripcion_dieta() {
        if (tipo == "cetogénica") return "Dieta baja en carbohidratos y alta en grasas.";
        if (tipo == "baja de peso") return "Dieta enfocada en la reducción de peso.";
        if (tipo == "vegana") return "Dieta que excluye todos los productos de origen animal.";
        if (tipo == "vegetariana") return "Dieta que excluye la carne y el pescado.";
        return "Descripción no disponible para este tipo de dieta.";
        }

};

#endif