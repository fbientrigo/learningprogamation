#include <iostream>
using namespace std;

int main(){
    int entero;
    long gran_entero;
    char caracter;
    float decimal;
    double gran_decimal;

    scanf("%d %ld %c %f %lf", &entero, &gran_entero, &caracter, &decimal, &gran_decimal);

    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",entero,gran_entero,caracter,decimal, gran_decimal);

    return 0;
}