#include <iostream>

int main()
{
    // print welcome messages to the terminal
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    // declare the 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodesSum = CodeA + CodeB + CodeC;
    const int CodesProduct = CodeA * CodeB * CodeC;

    // print the CodesSum and CodesProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodesSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodesProduct << std::endl;

    return 0;
}