#include <stdio.h> // 
#include <stdlib.h>

#define N 100000;  // como definiremos los arrays

int main(){
    double* x = malloc(N * sizeof(double));
    print("%lu\n", sizeof(x));
}
    