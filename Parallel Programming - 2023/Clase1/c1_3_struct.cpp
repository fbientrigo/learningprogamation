#include <stdio.h>
#include <stdlib.h>

struct vector{
    int x,y,z;
};

enum semana{lun, mar, mie, jue, vie, sab, dom}; // asigna un numero a cada variable, lunes es 

int main(){
    
    printf("Vectores mediante una estructura \n");
    struct vector v;
    v.x = 10;
    v.y = 12;
    v.z = 15;
    printf("%d %d %d \n", v.x, v.y, v.z);

    printf("Uso de enum:\n");
    enum semana dia;
    dia = mie;

    printf("%d\n", dia);
    printf("%lu\n", sizeof(dia));    

}