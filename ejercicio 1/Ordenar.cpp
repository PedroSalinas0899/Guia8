#include <iostream>

#include "Ordenar.h"

Ordenar::Ordenar () {
}

void Ordenar::burbuja_menor(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar;
    for(int i = 0;i < tamano; i++){
        for(int j = 0; j < tamano-1; j++){
            if(arreglo[j] > arreglo[j+1]){
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = auxiliar;
            }
        }
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Burbuja menor| " << tiempo_ordenar << " milisegundos" << endl;
}

void Ordenar::burbuja_mayor(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar;
    for(int i = 0;i < tamano; i++){
        for(int j = 0; j < tamano-1; j++){
            if(arreglo[j] < arreglo[j+1]){
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = auxiliar;
            }
        }
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Burbuja mayor| " << tiempo_ordenar << " milisegundos" << endl;
}

void Ordenar::insercion(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar, j;
    for(int i = 0;i < tamano; i++){
        auxiliar = arreglo[i];
        j = j-1;
        while((arreglo[j] > auxiliar) && (j >= 0)){
            arreglo[j+1] = arreglo[j];
            j--;
            arreglo[j+1] = auxiliar;
        }
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Insercion| " << tiempo_ordenar << " milisegundos" << endl;
}

void Ordenar::insercion_binaria(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar, j, primero, ultimo, central;
    for(int i = 1;i < tamano; i++){
        auxiliar = arreglo[i];
        primero = 0;
        ultimo = i-1;
        while(primero <= ultimo){
            central = (int)((primero+ultimo)/2);
            if(auxiliar < arreglo[central]){
                ultimo = central-1;
            }
            else{
                primero = central+1;
            }
        }
        for(int j = central-1; j >= primero; j--){
            arreglo[j+1] = arreglo[j];
        }
        arreglo[primero] = auxiliar;
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Insercion binaria| " << tiempo_ordenar << " milisegundos" << endl;
}

void Ordenar::seleccion(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar, menor;
    for(int i = 0;i < tamano; i++){
        menor = i;
        for(int j = 1;j < tamano; j++){
            if(arreglo[menor] > arreglo[j])
            menor = j;
        }
        auxiliar = arreglo[i];
        arreglo[i] = arreglo[menor];
        arreglo[menor] = auxiliar;
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Seleccion| " << tiempo_ordenar << " milisegundos" << endl;
}

void Ordenar::shell(int* arreglo, int tamano){
    clock_t time;
    time = clock();
    double tiempo_ordenar;

    int auxiliar, i, tope;
    bool flag;
    tope = tamano+1;
    while(tope > 1){
        tope = (int)(tope/2);
        flag = true;
        while(flag == true){
            flag = false;
            i = 0;
            while((i + tope) < tamano){
                if(arreglo[i] > arreglo[i+tope]){
                    auxiliar = arreglo[i];
                    arreglo[i] = arreglo[(i+tope)];
                    arreglo[(i+tope)] = auxiliar;
                    flag = true;
                }
                i = i+1;
            }
        }
    }

    tiempo_ordenar = ((clock() - time)/(double) CLOCKS_PER_SEC) * 1000;

    cout << "Shell| " << tiempo_ordenar << " milisegundos" << endl;
}


void Ordenar::imprimir(int* arreglo, int tamano){
    for(int i = 0;i < tamano; i++){
        cout << "a["<< i << "]=" << arreglo[i] << " ";
    }
    cout << endl;
    cout << endl;
}


