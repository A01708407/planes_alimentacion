#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H

#include<iostream>
#include "Dieta.h"
using namespace std;

class Mantenimiento:public Dieta{
    private:
    float nivel_cetosis;

    public:
    Mantenimiento():Dieta(){
        nivel_cetosis = 0;
    }

    Mantenimiento(float _nivel_cetosis , string _nombre, vector<string> _alimentos, string _fecha_creacion):Dieta(_nombre, _alimentos,_fecha_creacion){
        nivel_cetosis = _nivel_cetosis;
    }

    float get_nivel_cetosis(){
        return nivel_cetosis;
    }

    void set_nivel_cetosis(float _nivel_cetosis){
        nivel_cetosis = _nivel_cetosis;
    }

    void imprime_datos(){
        Dieta::imprime_datos();
        cout << "Nivel_cetosis: " << nivel_cetosis << endl;
    }
};

#endif