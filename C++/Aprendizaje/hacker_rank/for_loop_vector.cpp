#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<int> v{10};

    int begin, end;
    std::cin >> begin >> end;
    for (int i = begin; i <= end; ++i)
    {
        if (i <= 9)
            std::cout << numbers[i] << std::endl;
        else
            std::cout << (i % 2 == 0 ? "even" : "odd") << std::endl;
    }
    return 0;

}