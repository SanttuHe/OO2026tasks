#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game( int maxNumber)
{
    this->maxNumber = maxNumber;

    srand(time(0));
    rightNumber = rand() % maxNumber + 1;
    guessCount = 0;

    cout << "Game constructor kutsuttu\n";
}

void Game::Play()
{
    int guess = 0;

    while( guess != rightNumber){
        cout << "Arvaa luku 1-40 valilta: ";
        cin >> guess;
        guessCount++;


    if (guess < rightNumber){
            cout << "Lukusi on liian pieni\n";
    }else if (guess > rightNumber){
        cout << "Lukusi on liian suuri\n";
    }else{
        cout << "Arvauksesi on aivan oikein\n";
    }
    }
}

void Game::printGameResult()
{
    cout << "Oikea luku oli: " << rightNumber << endl;
    cout << "Arvausten maara: " << guessCount << endl;
}
