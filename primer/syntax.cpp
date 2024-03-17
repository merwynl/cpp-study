#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // std is a namespace;
    //:: is a scope operator and you're essentially checking for code within the namespace
    std::cout << "\nYou are a musician using your shamisen to defend your small village from a group of " << Difficulty;
    std::cout << " yokai. \nTune your instrument by matching the right musical notes to continue...\n\n";

}


bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum & CodeProduct to the terminal
    std::cout << "+ There are 3 keys in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nWell done! You have defeated this group of yokai!\n\n";
        return true;
    }
    else {
        std::cout << "\nUh-oh! You've lose this battle and the yokai are on a rampage!\n\n";
        return false;
    }
}

//
int main()
{
    srand(time(NULL)); //Creates a new random sequence based on the time of day

    int LevelDifficulty = 1;
    const int MaxLevel = 5;
    while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }

    }
    std::cout << "\nCongratulations! You have defeated all the yokai and saved the village!";
    return 0;
}