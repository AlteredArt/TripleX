#include <iostream>
#include <ctime>
void PrintIntroduction(int Difficulty) {
    std::cout << "\n\nYou are an under cover agent infiltrating a level " << Difficulty;
    std::cout << " secret organization database... \nYou have a small window of time to access the mainframe..\n";
    std::cout << "Focus and enter the correct code, before you get noticed.\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    /*declaration expressions
    this is also multiline comment */
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA *CodeB * CodeC;

    std::cout << "+ There are 3 digits that make up the code";
    std::cout << "\n+ The codes sum is equal to: " << CodeSum;
    std::cout << "\n+ The codes product equals: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
   

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    if ( GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nWell Done, you accessed one server, keep going";
        return true;
    } else {
        std::cout << "\nYou enetered the Wrong Code, careful and try again! ";
        return false;
    }
}

int main() 
{
    srand(time(NULL));
    int const MaxDifficulty = 5;
    int LevelDifficulty = 1;
   while(LevelDifficulty <= MaxDifficulty)
   {
    
       bool bLevelComplete = PlayGame(LevelDifficulty);
       std::cin.clear();    //this clears any errors
       std::cin.ignore();   //Discards the buffer
    
        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
       
   }

     std::cout << "\n***Great work, You fully accessed all the servers and retrieved all the files***\n";
     return 0;
}