#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

#include "Ordenar.h"

using namespace std;
//Funcion principal
int main(int argc, char *argv[]){
    //declarar variable y obejeto a usar
    Ordenar ordenamiento = Ordenar();
    int tamano;
    int numero_parametros = argc-1;
    string parametro;
    //determinar si el ingreso de parametros esta correcto
    if(numero_parametros < 2){
        cout << "Falta el segundo parametro." << endl;
        cout << "Mostrar arreglos [s]." << endl;
        cout << "No mostrar arreglos [cualquier otro parametro]." << endl;
        return 0;
    }
    else if (numero_parametros > 2){
        cout << "Sobran pametros, sin embargo se continuara igual." << endl;
    }
    //bloque de expecion para determinar si el parametro 1 es valido
    try{
        tamano = stoi(argv[1]);
        parametro = argv[2];
    }
    catch(std::invalid_argument){
        cout << "El parametro numero ingresado no es valido." << endl;
        return 0;
    }
    //determinar tamano maximo del arreglo
    if(tamano > 1000000 or tamano <= 0){
        cout << "El parametro numero ingresado no es valido." << endl;
    }
    else{
        //declarar vector arreglo
        int *arreglo = new int[tamano];
        //rellenarlo de numeros aleatorios

        srand((unsigned)time(NULL));

        for(int i = 0; i < tamano; i++){
            int numero_aleatorio = (rand() % tamano) + 1;
            arreglo[i] = numero_aleatorio;
        }
        //declara vector arreglos que serviran para ejecutar el ordenamiento
        //de los 7 metodos
        int *a1= new int[tamano];
        int *a2= new int[tamano];
        int *a3= new int[tamano];
        int *a4= new int[tamano];
        int *a5= new int[tamano];
        int *a6= new int[tamano];
        int *a7= new int[tamano];
        //igualar cada arreglo al arreglo principal
        for(int j = 0; j < tamano; j++){
            a1[j] = arreglo[j];
            a2[j] = arreglo[j];
            a3[j] = arreglo[j];
            a4[j] = arreglo[j];
            a5[j] = arreglo[j];
            a6[j] = arreglo[j];
            a7[j] = arreglo[j];
        }

        cout << "Metodo             | Tiempo" << endl;
        //llamamiento al objeto ordenamiento para utilizar cada metodos
        // de ordenamiento declarado en la clase Ordenar
        ordenamiento.burbuja_menor(a1, tamano);
        ordenamiento.burbuja_mayor(a2, tamano);
        ordenamiento.insercion(a3, tamano);
        ordenamiento.insercion_binaria(a4, tamano);
        ordenamiento.seleccion(a5, tamano);
        ordenamiento.shell(a6, tamano);
        ordenamiento.quicksort(a7, tamano);
        cout << " " << endl;
        //verificar si el parametro "s" existe y si es asi
        // imprimir los arreglos ordenados de cada metodo
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
            ordenamiento.imprimir(a7, tamano);
        }
    }
    return 0;
}

