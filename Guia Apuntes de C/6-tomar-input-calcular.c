// toma 2 coordenadas como input y escupe su version de coordenadas del nether
// si se utiliza el -n como primer input del progrmaa, entonces
// traducira del nether al Overworld
//
// puede usar programa -h 
// para obtener ayuda

#include<stdio.h>
//para comparar strings usaremos stringcompare o strcmp(); esta en este header
#include<string.h>
//para convertir string en numero usamos atoi()
#include<stdlib.h>


int counter;
int x;
int z;

int main(int argc, char* argv[]){
 
  //seccion de ayuda
  if(argc == 1){
    printf("programa x y [-n] \n\tPor default (sin -n) hace Overworld->Nether\n");
    printf("\tUsando -n especificaos Nether->Overworld\n");
  }

  printf("Cantidad de argumentos: %d \n",argc);

  //conversion de strings de numeros a ints
  x = atoi(argv[1]);
  z = atoi(argv[2]);


  printf("Las coordenadas ingresadas son: \n");
  printf("x: %d \n", x);
  printf("z: %d \n", z);


  // en el caso de utilizar coordenadas para el nether
  if(argc == 3){
    printf("Traduciendo del Overworld al Nether \n");

    x = x/8;
    z = z/8; 

    printf("x: %d \nz: %d \n", x, z);

  }



//  if(argv[3] == "-n"){
//  es la idea; pero hemos de usar strcmp para comparar strings
//  de ser identicas retornada 0, por tanto:
  if(strcmp(argv[3], "-n") == 0 ){
    printf("Traduciendo del Nether al Overworld \n");
  
    x = x*8;
    z = z*8;

    printf("x: %d \nz: %d \n", x, z);

  }

  printf("Los inputs son: \n");
  //imprimir los inputs
  for(counter=2; counter<argc; counter++){
  
    printf("argv[%d]: %s \n", counter, argv[counter]);
  }



}




