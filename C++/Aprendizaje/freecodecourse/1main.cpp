#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Guia", "para", "controlar", "el", "debugger", "de", "C++"};

    for (const string& word : msg)
    {
         cout << word << " ";
    }
     cout <<  endl;

    auto result = (10 <=> 20) > 0; // modern syntax
     cout << result <<  endl;
}
