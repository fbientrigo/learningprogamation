/*
Problema 1:
Confeccionar una clase que permita cargar el nombre y la edad de una persona. 
Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) 
o no
*/

#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public: // aqui van los metodos accesibles por el user
    Persona(const std::string _nombre, int _edad ){ // constructor?
        nombre = _nombre;
        edad = _edad;
    }

    void imprimirDatos() {
        std::cout << "Nombre: " << nombre << std::endl;        
        std::cout << "Edad: " << edad << std::endl;
    }

    bool esMayorDeEdad() {
        bool mayor_18 = edad >= 18;
        if (mayor_18) {std::cout << "Mayor de edad" << std::endl;} else {std::cout << "Menor de edad" << std::endl;}
        return mayor_18;
    }
}; // va un semicolon despues de def la clase

int main(int argc, char** argv){
    char nombre[40];
    int edad;

    std::cout << "nombre de la persona: ";
    std::cin >> nombre;
    std::cout << "edad de la persona: ";
    std::cin >> edad;

    Persona persona_instancia(nombre, edad);

    persona_instancia.imprimirDatos();

    std::cout << "es mayor de edad bool?: " << persona_instancia.esMayorDeEdad() << std::endl;

    return 0;
}