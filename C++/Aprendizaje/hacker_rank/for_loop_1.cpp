#include <iostream>


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



int main() {

    // strings es donde se alamacena
    std::string input1, input2;
    std::getline(std::cin, input1); //map from cin to inpt
    std::getline(std::cin, input2); //map from cin to inpt

    // std::cout << "String input: " << input1 << " " << input2 << std::endl;
    
    int n1, n2;
    n1 = std::stoi(input1);
    n2 = std::stoi(input2);
    //ss >> n1 >> n2;
    // std::cout << "Inputs: " << n1 << " " << n2 << std::endl;

    // std::cout << string_of_number(n1) << std::endl;
    
    
    for (int n = n1; n <= n2; n++) {
        if (n <= 9) std::cout << string_of_number(n) << std::endl;
        else {
            std::cout << (n % 2 == 0 ? "even" : "odd") << std::endl;

        }
    }

}

