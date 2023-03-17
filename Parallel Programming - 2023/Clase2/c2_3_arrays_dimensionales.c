#include <stdio.h>
#include <stdlib.h>

/*
Internamente se almacenan de manera lineal
*/


int main(){
    // declaracion multidimensional
    int xN = 4;
    int yN = 4;
    double phi[xN][yN];
    printf("%lu \n", sizeof(phi));

    // se prefiere guardar de esta manera
    double* psi = malloc(xN * yN * sizeof(double));

    for (int i =0; i < xN; i++) {
        for (int j = 0; j < yN; j++) {
            // esto es mas facil de leer, pero tendremos problemas en la paralelizacion
            phi[i][j] = i + j;

            // esta es la forma que se prefiere
            // es mejor mantener el conocimiento de la organizacion de los datos
            // en este lugar se encuentran unidimensional
            psi[i*yN + j] = i + j;
        }
    }
}