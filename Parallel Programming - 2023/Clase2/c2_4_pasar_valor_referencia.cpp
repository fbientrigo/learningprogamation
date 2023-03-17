#include <stdio.h>
#include <stdlib.h>

int actualizar_x(int x){
    return x+1;
}

void actualizar_x2(int* p){
    *p += 1;
}

int main(){

    // pasar por valor
    int x = 10;
    int y;
    // modificamos y =11; pero el x se mantiene x = 10
    y = actualizar_x(x);

    printf("pasando por valor \n");
    printf("%d %d\n", x, y);

    // pasar por referencia
    int x2 = 10;
    int* p;

    p = &x;
    actualizar_x2(p);

    printf("pasando por referencia (punteros) \n");
    printf("%d \n", x);
}