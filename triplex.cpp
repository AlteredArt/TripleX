#include <iostream>

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
    const int CodeA = 4;
    const int CodeB = 6;
    const int CodeC = 3;

    int CodeSum = CodeA+CodeB+CodeC;
    int CodeProduct = CodeA*CodeB*CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 digits that make up the code" <<std::endl;
    std::cout << "The codes sum is equal to " << CodeSum << std::endl;
    std::cout << "The codes product equals " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
   

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    if ( GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nAccess Granted";
        return true;
    } else {
        std::cout << "\nWrong Code! ";
        return false;
    }
}

int main() 
{
    int LevelDifficulty = 1;
   while(true)
   {
       bool bLevelComplete = PlayGame(LevelDifficulty);
       std::cin.clear();    //this clears any errors
       std::cin.ignore();   //Discards the buffer
    
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
   
   }


     return 0;
}