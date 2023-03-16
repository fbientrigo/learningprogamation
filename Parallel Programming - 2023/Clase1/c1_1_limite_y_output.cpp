#include <iostream>
#include <limits>

/*
librerias estandar de C
#include <stdio.h>
#iclude <stdlib.h
*/

int main(int argc, char** argcv) {
    //tipos basicos
    int numero1 = -3;
    uint numero2 = 4;
    float numero3 = 3.1415;
    double numero4 = 3.1415;

    printf("%d %u %.10f %lf \n", numero1, numero2, numero3, numero4);

    std::cout << "Limites de las los data types" << std::endl;
    
    // limites posibles de las variables
    std::cout
    << "tipo\t│ sizeof bytes\t| lowest()\t│ min()\t\t│ max()\n"
    << "bool\t│ "
    << sizeof(bool) << "\t\t| "
    << std::numeric_limits<bool>::lowest() << "\t\t│ "
    << std::numeric_limits<bool>::min() << "\t\t│ "
    << std::numeric_limits<bool>::max() << '\n'
    << "uchar\t│ "
    << sizeof(unsigned char) << "\t\t| "
    << +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
    << +std::numeric_limits<unsigned char>::min() << "\t\t│ "
    << +std::numeric_limits<unsigned char>::max() << '\n'
    << "int\t│ "
    << sizeof(int) << "\t\t| "
    << std::numeric_limits<int>::lowest() << "\t│ "
    << std::numeric_limits<int>::min() << "\t│ "
    << std::numeric_limits<int>::max() << '\n'
    << "float\t│ "
    << sizeof(float) << "\t\t| "
    << std::numeric_limits<float>::lowest() << "\t│ "
    << std::numeric_limits<float>::min() << "\t│ "
    << std::numeric_limits<float>::max() << '\n'
    << "double\t│ "
    << sizeof(double) << "\t\t| "
    << std::numeric_limits<double>::lowest() << "\t│ "
    << std::numeric_limits<double>::min() << "\t│ "
    << std::numeric_limits<double>::max() << '\n';

    return 0;
}