#include <iostream>

void PrintIntroduction()
{
    // print welcome messages to the terminal
    std::cout << "\n\n#######                                     #     # \n"
                 "   #    #####  # #####  #      ######        #   #  \n"
                 "   #    #    # # #    # #      #              # #   \n"
                 "   #    #    # # #    # #      #####  #####    #    \n"
                 "   #    #####  # #####  #      #              # #   \n"
                 "   #    #   #  # #      #      #             #   #  \n"
                 "   #    #    # # #      ###### ######       #     # \n\n";
    std::cout << "\nYou are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame()
{
    // declare the 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodesSum = CodeA + CodeB + CodeC;
    const int CodesProduct = CodeA * CodeB * CodeC;

    // print the CodesSum and CodesProduct to the terminal
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add up to: " << CodesSum << "\n";
    std::cout << "+ The codes multiply to give: " << CodesProduct << "\n\n";

    // prompt the player to enter their guess
    std::cout << "Please enter your codes separated by spaces: ";
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // check the entered codes
    if (GuessSum == CodesSum && GuessProduct == CodesProduct)
    {
        return true;
    }
    else
    {
        return false;
    }

    std::cout << "The sum for the numbers you entered adds up to: " << GuessSum << "\n";
    std::cout << "The product for the numbers you entered results in: " << GuessProduct << "\n";
}

int main()
{
    PrintIntroduction();

    int Round = 1;
    int MaxRounds = 3;
    while (Round <= MaxRounds)
    {
        bool bLevelComplete = PlayGame(); // 'b' prefix for booleans is an Unreal style-convention
        if (bLevelComplete == true)
        {
            std::cout << "\nYou did it!\n";
        }
        else
        {
            std::cout << "\nThe bomb exploded and you just died horribly!\n";
        }
        std::cin.clear();  // clear any errors
        std::cin.ignore(); // discard the buffer

        Round++;
    }

    return 0;
}