/*
3 - Constantes

#define constante
---------------------------
3.b - Operadores Aritmeticos

a++ ++a sus diferencias

* Multiplicacion
/ Division
% Modulo

*/

// --------- Seccion 3 Constantes ----------------------
// se define igual que una variable pero con const adelante
const int age = 37;
// en C por convencion las constantes son en mayusculas
const float PI = 3.1415;

//Otra manera de definirlo nos hace omitir su tipo de dato
// ya que C lo inferira; se omite el "=" y el ";" al final
#define TAU 6.2830
// # significa que sera algo para el compilador


#include<stdio.h>

// ----------- Seccion 3.b Operadores ------------
int main(){
  int a = 2;
  int b;
  
  printf("Caso inicial, tenemos a = %d\n", a);
  printf("Para b que no esta definido, ahora tiene b=%d \n", b);  
  printf("a++ incrementa la variable luego de utilizarla \n");
  b = a++; // b = 2; mientras que a = 3  
  printf(" Ejecutando b = a++; tenemos \n b=%d \n a=%d",b,a);
  
  a = 2; 
  printf("++a incrementa la variable despues de utilizarla \n");
  b = ++a; // b = 3; mientras a= 3'
  printf(" Ejecutando b = ++a; tenemos \n b=%d \n a=%d",b,a);
 
}
