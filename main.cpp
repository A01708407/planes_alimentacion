#include "Dieta.h"
#include "Medida.h"
#include "Paciente.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Objeto clase dieta
    Dieta dieta1("cetogénica", "Huevos, Aguacate, Aceite de coco", "2023-11-19");
    dieta1.imprime_datos();
    cout << dieta1.descripcion_dieta() << endl;

    // Objeto clase medida
    Medida medidas1(70, 90, 95);
    medidas1.imprime();

    // Lista de dietas para el paciente
    vector<Dieta> dietas;
    dietas.push_back(dieta1);

    // Objeto clase paciente
    Paciente paciente1(30, 1, medidas1, {"Ninguna"}, "Juan Perez", 1.75, 75.0);
    paciente1.set_dietas(dietas); // Establecer las dietas del paciente
    paciente1.imprime_datos();

    return 0;
}
