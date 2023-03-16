#include <stdio.h>
#include <stdlib.h>

#define N 10000000 // el define reemplaza en el texto antes de compilar



int main(){

    double x[N]; // entregara violacion de segmento
    /*
    Segmentation fault
    ocurre por que el pre compilador intenta reemplazar N por el valor, pero no puede acceder a este;
    (existen 2 areas de memoria, stack y heap, areas que tienen capacidades muy diferentes)
    el sistema deja el array en elstack, y debido a que son 80Mb no puede dejarlo alli
    */

    printf("bytes: %lu \n", sizeof(x));

    /* bytes a MB*/
    printf("M bytes: %lu \n", (long unsigned int) ( sizeof(x)) / (1024 * 1024) );

    /*
    dividir por 1024 te da 1KB, dividir denuevo te da MB

    1 byte = 2³
    */
}