#include<iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string>arreglo;

        arreglo.Insertar_Inicio("Tal");
        arreglo.Insertar_Inicio("Que");
        arreglo.Insertar_Final("Estas");
        arreglo.Insertar_Final("como");
        
        arreglo.insertar("amigo", 2);
        arreglo.Eliminar_Inicio_Inicio();
        arreglo.Eliminar_Inicio_final();
        arreglo.Eliminar_Inicio(2);

    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
