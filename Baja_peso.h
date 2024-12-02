#ifndef BAJA_PESO_H
#define BAJA_PESO_H

#include<iostream>
#include "Dieta.h"
using namespace std;

class Baja_peso:public Dieta{
    private:
    string tipo;

    public:
    Baja_peso():Dieta(){
        tipo = "";
    }

    Baja_peso(string _tipo , string _nombre, vector<string> _alimentos, string _fecha_creacion):Dieta(_nombre, _alimentos,_fecha_creacion){
        tipo = _tipo;
    }

    string get_tipo(){
        return tipo;
    }

    void set_tipo(string _tipo){
        tipo = _tipo;
    }

    void imprime_datos(){
        Dieta::imprime_datos();
        cout << "Tipo: " << tipo << endl;
    }

    string descripcion_dieta() {
            if (tipo == "cetogénica"){
                return "Dieta baja en carbohidratos y alta en grasas.";
            }
            else if (tipo == "base"){
                return "Dieta enfocada en la reducción de peso.";
            }
            else if (tipo == "vegana"){
                return "Dieta que excluye todos los productos de origen animal.";
            }
            else if (tipo == "vegetariana"){
                return "Dieta que excluye la carne y el pescado.";
            }
            else{
                return "Descripción no disponible para este tipo de dieta.";
            }
        }
};

#endif