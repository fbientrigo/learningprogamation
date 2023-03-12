#include <iostream>

int main(int argc, char **argv) {
    std::cout << "argc & argv" << std::endl;
    std::cout << argc << std::endl; //cantidad argumentos

    std::cout <<"argv: \t"<< argv << std::endl; // memory address
    std::cout <<"*argv: \t"<< *argv << std::endl; // el lugar donde corre el codiog
    std::cout <<"&argv: \t"<< &argv << std::endl; // memory
    std::cout <<"argv[0]: \t"<< argv[0] << std::endl; // arguments
    std::cout <<"argv[1]: \t"<< argv[1] << std::endl; // arguments

    std::cout << "Loop For \n";
    // arroja todos los inputs a nuestro codigo
    for(int i=0; i< argc; i++){
        std::cout << argv[i] << std::endl;
    }
}
