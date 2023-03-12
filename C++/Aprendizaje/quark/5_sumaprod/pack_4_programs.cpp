#include<iostream>

// carga el lado de un cuadrado
int chooseProgram();
/*  1.- Perimetro de un cuadrado
    2.- 4 numeros, suma y producto 
    3.- 4 numeros, suma y promedio 
    4.- Precio y cantidad, total
*/

int getSquareSide();

int meanofarray(int array[], int size);

int precioyCantidad();

int main()
{
    //elegir el programa a ejecutar
    int program = 0;
    program = chooseProgram();
    switch (program)
    {
        case 1: {// perimetro cuadrado
            int side = getSquareSide();
            std::cout << "El perimetro del cuadrado es: " << side*4 << std::endl;
            break; }
        case 2: {// suma y producto
            int num1, num2, num3, num4;
            std::cout << "Ingrese 4 numeros: ";
            std::cin >> num1 >> num2 >> num3 >> num4;
            std::cout << "La suma de los 2 primeros numeros es: " << num1+num2 << std::endl;
            std::cout << "La multiplicación de los 2 ultimos numeros es: " << num3 * num4 << std::endl;
            break; }
        case 3: {// suma y promedio
            int array[4];
            std::cout << "Ingrese 4 numeros: ";
            std::cin >> array[0] >> array[1] >> array[2] >> array[3];
            std::cout << "La suma de los 4 numeros es: " << meanofarray(array, 4)*4 << std::endl;
            std::cout << "El promedio del 4 numeros es: " << meanofarray(array, 4) << std::endl;
            break; }
        case 4: { // precio y cantidad
            int total = 0;
            int precio, cantidad;
            while(precio != 0 || cantidad !=0){
                std::cout << "Ingrese el precio del producto: ";
                std::cin >> precio;
                std::cout << "Ingrese la cantidad de productos: ";
                std::cin >> cantidad;
                std::cout << "Subtotal en producto: " << precio * cantidad << std::endl;
                total += precio * cantidad;
                std::cout << "Total: " << total << std::endl;
            }
            break; }
        default: {
            std::cout << "Programa no encontrado" << std::endl;
            break;}
    }

    return 0;
}

int chooseProgram()
{
    int program;
    std::cout << "Progamas\n 1.- Perimetro de un cuadrado\n 2.- 4 numeros, suma y producto\n 3.- 4 numeros, suma y promedio\n 4.- Precio y cantidad, total\n";
    std::cout <<"Ingrese el numero del programa que desea ejecutar: ";
    std::cin >>program;
    return program;
}

int getSquareSide()
{
    int side;
    std::cout << "Ingrese el lado del cuadrado: ";
    std::cin >> side;
    return side;
}

int meanofarray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum/size;
}

int precioyCantidad()
{
    int precio, cantidad;
    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precio;
    std::cout << "Ingrese la cantidad de productos: ";
    std::cin >> cantidad;
    return precio * cantidad;
}