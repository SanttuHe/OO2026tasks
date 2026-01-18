#ifndef GAME_H
#define GAME_H

class Game
{
private:
    int maxNumber;
    int rightNumber;
    int guessCount;

public:
    Game(int maxNumber);
    void Play();
    void printGameResult();
};
#endif
