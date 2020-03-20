Guía 8: Métodos de Ordenamiento Interno   

El ejercicio de la guía consistía en crear un programa el cual fuera capaz de ordenar un arreglo de 7 métodos diferentes: 

 • Burbuja Menor • Burbuja Mayor • Inserción • Inserción Binaria • Selección • Shell • Quicksort 

El arreglo debía de ser capaz de poder soportar hasta 1000000 números, por lo que era obligado el hecho de utilizar vectores en la realización de este, debido a que un arreglo normal en C++ solo soporta hasta aproximadamente 290000. 

Para ejecutar el programa correctamente, es necesario pasar 2 parámetros al momento de ejecutarlo; 1 tipo entero el cual debe ser mayor a 0 y menor o igual a 1000000, y ***otro el cual puede ser cualquier tipo de dato, sin embargo, si es una “s", el programa al ordenar el arreglo debe ser capaz de imprimir en pantalla el arreglo entero para cada método. Si se ingresan más de 2 parámetros, el programa destacara que ha ocurrido eso, pero aun así hará su labor, debido a que esto no afecta en el funcionamiento del programa.***

Para poder hacer funcionar el programa utiliza un archivo makefile, el cual nos sirve para poder automatizar la compilación y posterior ejecución del programa. 

***Para utilizar el makefile correctamente y lograr ejecutar el programa de la mejor manera se recomienda:  

  

1) Abrir la consola en la carpeta donde se encuentran los archivos 

  

2) Escribir en la consola:        make 

  

3) Y luego:     ./Programa “número que definirá el tamaño del arreglo" “parámetro secundario" 

  

Con esto debería ser más que suficiente. 

  

  

Para la elaboración del programa se utilizó: 

-Gnome builder 

  

Sistema operativo: 

-Ubuntu Ubuntu 18.04.3 

  

Desarrolladores: 

-----------------------------------Pedro Salinas Soto------------------------------------ 
