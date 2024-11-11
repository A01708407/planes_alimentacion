#include "Dieta.h"
#include "Medida.h"
#include "Paciente.h"
#include<iostream>

using namespace std;

int main() {
    //Objeto clase dieta
    Dieta dieta1("cetogénica");
    dieta1.imprime_datos();
    cout << dieta1.descripcion_dieta() << endl;

    //Objeto clase medida
    Medida medidas1(70, 90, 95);
    medidas1.imprime();

    //Objeto clase paciente
    Paciente paciente1(75.0, 30, "Ninguna", "Juan Perez", 1.75, medidas1);
    paciente1.imprime_datos();

    return 0;
}
