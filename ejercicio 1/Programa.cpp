#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

#include "Ordenar.h"

using namespace std;

int main(int argc, char *argv[]){
    int tamano = stoi(argv[1]);

    if(tamano > 1000000 or tamano <= 0){
        cout << "El numero ingresado no es valido." << endl;
    }
    else {
        int *arreglo;
        arreglo = new int[tamano];

        for(int i = 1; i <= tamano; i++){
            int numero_aleatorio = (rand() % tamano) + 1;
            arreglo[i] = numero_aleatorio;
        }

        int *a1= new int[tamano];
        int *a2= new int[tamano];
        int *a3= new int[tamano];
        int *a4= new int[tamano];
        int *a5= new int[tamano];
        int *a6= new int[tamano];
        int *a7= new int[tamano];

        for(int j = 1; j <= tamano; j++){
            a1[j] = arreglo[j];
            a2[j] = arreglo[j];
            a3[j] = arreglo[j];
            a4[j] = arreglo[j];
            a5[j] = arreglo[j];
            a6[j] = arreglo[j];
            a7[j] = arreglo[j];
        }

        Ordenar ordenamiento;
        cout << "Metodo             | Tiempo" << endl;
        ordenamiento.burbuja_menor(a1, tamano);
        ordenamiento.burbuja_mayor(a2, tamano);
        ordenamiento.insercion(a3, tamano);
        ordenamiento.insercion_binaria(a4, tamano);
        ordenamiento.seleccion(a5, tamano);
        ordenamiento.shell(a6, tamano);
        cout << " " << endl;

        bool ver = false;
        string parametro = argv[2];

        if (parametro == "s" ){
            cout << "Burbuja menor: ";
            ordenamiento.imprimir(a1, tamano);
            cout << "Burbuja mayor: ";
            ordenamiento.imprimir(a2, tamano);
            cout << "Insercion: ";
            ordenamiento.imprimir(a3, tamano);
            cout << "Insercion binaria: ";
            ordenamiento.imprimir(a4, tamano);
            cout << "Seleccion:";
            ordenamiento.imprimir(a5, tamano);
            cout << "Shell: ";
            ordenamiento.imprimir(a6, tamano);
            cout << "Quicksort: ";
        }
    }
    return 0;
}

