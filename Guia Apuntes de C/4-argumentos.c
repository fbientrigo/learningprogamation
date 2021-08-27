#include<stdio.h>

/* Tambien sirve escribir*/
// int main(int argc, char* argv[]){}
int main(int argc, char** argv){
  printf("El nombre del Programa es el primer argumento del arreglo arv: %s \n", argv[0]);

  printf("La cantidad de argumentos queda almacenada en argc, un int; serian %d argumentos",argc);

}
