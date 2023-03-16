#include <stdio.h>
#include <stdint.h>
#include <limits>


int main(){
    uint8_t numero1;

    printf("%lu \n",numero1);

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