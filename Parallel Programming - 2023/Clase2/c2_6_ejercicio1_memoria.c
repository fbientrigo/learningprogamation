/*
Poblar un array bidimensional 10*10 elementos,
usar el poblar array
*/

#include <stdio.h>
#include <stdlib.h>

void poblar_array(int* array, int xN, int yN){
    // en el ciclo ocurre la diferencia
    for (int i=0; i<xN; i++){
        for (int j=0; j<yN; j++){
            /*  existen yN bloques, cada uno de size xN
                por tanto i nos lleva atraves de los bloques
                mientras que j nos mueve dentro de esos bloques */
            array[i*yN + j] = i * j;

            /*
            [yn1] [yn2]
            [xn1 xn2 xn3]_1 [xn1 xn2 xn3]_2
            */
        }
    }
}

int main(){
    int xN = 10;
    int yN = 10;

    int* array = malloc(xN * yN * sizeof(int));

    poblar_array(array, xN, yN);

    // checkear
    for (int i =0; i < xN; i++) {
        for (int j = 0; j < yN; j++) {
            printf("%d ,\t", array[i*yN + j]);
        }
        printf("\n");
    }

}