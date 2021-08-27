/*
Guia de Apuntes - Cap 2
Opciones de Formato y algunos cuidados claros que se debe tener
*/
#include<stdio.h>
#include<math.h>

int main2(void){
    int N = -100;
    //Para imprimir % debe ser con %% ya que % es un caracter de escape para la funcion
    // mientras que para el compilador \ es un caracter de escape
    // para imprimirlo nos interesara lo que hara la funcion
    printf("------=--Imprimiendo Enteros--=------- \n ");
    printf("%%d e %%i sirven para enteros con signo, \n en el caso de no utilizar signos, como es %%u el numero en lugar de tener un rango: \n");
    printf("int: [-2^{N-1},2^{N-1}] \n");
    printf("unsigned: [0, 2^{N}] \n");
    printf("Formateo con %%d: %d \n", N);
    printf("Formateo con %%i: %i \n", N);
    printf("Formateo con %%u: %u \n", N);
    printf("Por ejemplo si imprimiera -1 como unsigned: %u \n",-1);
    printf("Lo que hemos visto a sido 2^{32} - 1 = %.lf - 1 = %u \n", pow(2, 32)  , -1);
    // es importante siempre imprimir un double como %lf, y no como int o cualquier unsigned entero
    // ya que son representaciones muy distintas y no obtendras resultados claros
    printf("------ Decimales ------------- \n");
    printf("La funcion pow(x,y) eleva x^y, toma y retorna doubles, osea Long Floats \n");
    printf("Tengamos un loop para imprimir potencias de 2: \n");
    for(int i=0; i<6; i++){
        double n = pow(2,i);
        printf("2^%d como %%d: %d; %%lf: %lf; %%u: %u; quitando ceros con %%.lf: %.lf \n",i, n,n,n,n);

    }

}