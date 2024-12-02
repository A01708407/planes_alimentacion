#include "Baja_peso.h"
#include "Mantenimiento.h"
#include "Medida.h"
#include "Paciente.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> b2alimentos = {"Almendras","Carnes rojas","Amaranto"};
    vector<string> c3alimentos = {"Leche","Fruta","Pollo"};
    vector<string> alergias1 = {"Cacahuate", "Nuez", "Almendra"};

    Baja_peso b2 = Baja_peso("Base","B2",b2alimentos,"12/06/2008");
    b2.imprime_datos();
    cout << endl;
    b2.agregar_alimento("Leche");
    b2.eliminar_alimento("Almendras");
    b2.imprime_datos();
    cout << "------------------------------------------" << endl;
    
    Mantenimiento c3 = Mantenimiento(45.67,"C3",c3alimentos,"17/04/2005");
    c3.imprime_datos();
    cout << endl;
    c3.set_nivel_cetosis(102.3);
    c3.imprime_datos();
    cout << "------------------------------------------" << endl;

    vector<Dieta> dietas1 = {b2, c3};
    Paciente ricardo = Paciente(58,2,alergias1,"Ian",1.78,95.6);
    ricardo.cambiar_medidas(70,80,95);
    ricardo.actualizar_informacion(59,2,alergias1,"Ian Vázquez", 1.75, 90, dietas1);
    ricardo.imprime_datos();
    cout << endl;
    
    return 0;
}