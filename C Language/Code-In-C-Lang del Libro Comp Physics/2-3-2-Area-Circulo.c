#include<stdio.h>
#define pi 3.14159265359

double r, A;

int main(){
  printf("Primer algoritmo del libro; \n2.3.2 Computing Software Basics-Calculo del area de un circulo \nIngresar el radio: ");
  scanf("%lf", &r); //leemos un long float; osea double, y guardamos en r
  A = r * r * pi;
  printf("El radio r=%f, area A= %f \n", r, A);

}
