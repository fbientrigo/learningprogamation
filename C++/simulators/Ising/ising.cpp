#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <vector>

double uniform()
{
    //int randomNumber = rand();
    //return float(randomNumber)/RAND_MAX;
    return 10;
}

int main(){
    std::cout << uniform() << std::endl;
}