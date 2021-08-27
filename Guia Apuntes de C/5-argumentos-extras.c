// Prueba compilar y correr
// $ programa.exe primero segundo tercero
// veras como toma los argumentos
#include<stdio.h>


/* Tambien sirve escribir*/
// int main(int argc, char* argv[]){}
void main(int argc, char** argv){
  printf("corriendo el programa %s \n", argv[0]);
  printf("con %d argumentos",argc);
  printf("Los argumentos almacenados son en orden: \n");

  //utilizamos un contador para iterar sobre los distintos argumentos
  if(argc >= 2){ //sobre 2 o igual, significa que se paso un arg aparte del propio exe
    int counter;
    //aqui se ubica la logica del programa
    for(counter=0; counter<argc; counter++){

      printf("argv[%d]: %s \n", counter, argv[counter]);
    }



  }

}
