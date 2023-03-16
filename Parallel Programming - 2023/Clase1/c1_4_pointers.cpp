#include <stdio.h>
#include <cstdlib> // para malloc

int main(){
    int y = 10;
    int* p;

    p = &y;
    printf("\t x:%d \t *p:%d \n", y, *p);
    printf("sizes: \t x: %lu \t p: %lu \t \n", sizeof(y), sizeof(p));
    printf("direccion de memoria p: %p \n", p);

    // ===================================================
    printf("Arrays y punteros \n");
    int x[4];

    x[0] = 1; // esto es un trabajo con punteros
    x[1] = 10;
    x[2] = 20;
    x[3] = 40;

                                //aritmetica de punteros
    printf("x: %d %d %d %d \n", *x, *(x+1), *(x+2), *(x+3));

    // ===================================================
    printf("Uso de malloc \n");
    int *z;
    z = (int*) malloc(4* sizeof(int)); // entregame la memoria, equivale a int z[4]
    z[0] = 1; // esto es un trabajo con punteros
    z[1] = 10;
    z[2] = 20;
    z[3] = 40;

                                //aritmetica de punteros
    printf("z: %d %d %d %d \n", *z, *(z+1), *(z+2), *(z+3));
}