#include <stdio.h>
#include <stdlib.h>

#define N 10000000 // el define reemplaza en el texto antes de compilar

double x[N];

int main(){

    /* double x[N]; entregara violacion de segmento */

    printf("bytes: %lu \n", sizeof(x));

    /* bytes a MB*/
    printf("M bytes: %lu \n", (long unsigned int) ( sizeof(x)) / (1024 * 1024) );

    /*
    dividir por 1024 te da 1KB, dividir denuevo te da MB

    1 byte = 2³
    */
}