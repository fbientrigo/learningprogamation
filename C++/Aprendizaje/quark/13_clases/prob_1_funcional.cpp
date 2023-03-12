/*
Problema 1:
Confeccionar una clase que permita cargar el nombre y la edad de una persona. 
Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) 
o no
*/

#include <iostream> 

int main(int argc, char **argv) {
    // let
    char nombre[40]; 
    int edad;

    std::cout << "Cargar el nombre de la persona" << std::endl;
    std::cin >> nombre;

    std::cout << "Cargar la edad de la persona" << std::endl;
    std::cin >> edad;

    std::cout << nombre;
    if (edad >= 18) {
        std::cout << " es mayor de edad" << std::endl;
    }
    else {
        std::cout << " no es mayor de edad" << std::endl;
    }

}