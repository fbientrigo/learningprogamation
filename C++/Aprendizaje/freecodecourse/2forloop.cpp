#include <iostream>
#include <cstdio>
#include <sstream>


int main() {
    std::string input1, input2;
    std::getline(std::cin, input1); //map from cin to inpt
    std::getline(std::cin, input2); //map from cin to inpt
    
    std::cout << input1 << std::endl;
    std::cout << input2 << std::endl;
    //std::stringstream ss(input);
    
    
    int n1, n2;
    
    n1 = std::stoi(input1);
    n2 = std::stoi(input2);
    //ss >> n1 >> n2;
    std::cout << n1 << " " << n2 << std::endl;
}


std::string string_of_number(int number) {
    switch(number) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "invalid number";
    }
}
