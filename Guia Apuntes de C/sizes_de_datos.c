#include<stdio.h>

// Aqui veremos el Size en bytes que tienen los numeros


int main(void) {
    // Se utiliza %lu para Long Unsigned Integer
    // y se obtiene el mismo numero usando %ld que es para Long Integer
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
    printf("______________ \n ");
    printf("char size: %ld bytes\n", sizeof(char));
    printf("int size: %ld bytes\n", sizeof(int));
    printf("short size: %ld bytes\n", sizeof(short));
    printf("long size: %ld bytes\n", sizeof(long));
    printf("float size: %ld bytes\n", sizeof(float));
    printf("double size: %ld bytes\n", sizeof(double));
    printf("long double size: %ld bytes\n", sizeof(long double));
}