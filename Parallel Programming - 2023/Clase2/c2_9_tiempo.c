/*
Programa que mide el tiempo de una funcion
*/
#include <stdio.h> //contiene printf
#include <stdlib.h> //contiene malloc
#include <time.h> //contiene el reloj
 

void poblar_array(int* array, int xN, int yN){
    for (int i=0; i<xN; i++){
        for (int j=0; j<yN; j++){
            array[i*yN + j] = i * j;
        }
    }
}
 
int main()
{
    // inicializamos un reloj
    clock_t t;
    t = clock(); // calcula el tiempo actual
    printf("Tiempo actual: %f \n", (double) t);

    int xN = 10000;
    int yN = 10000;
    int* array = malloc(xN * yN * sizeof(int));
    poblar_array(array, xN, yN);

    t = clock() - t;
    double time_taken = ((double)t) /CLOCKS_PER_SEC; // in seconds
 
    printf("El tiempo: %f \n", time_taken);

    // al imprimir un elemento el compilador no eliminara todo
    // entendera que es necesario tener los calculo
    printf("Un elemento del array: %d", array[16]);
    return 0;
}