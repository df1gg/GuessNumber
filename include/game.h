#ifndef GAME_H
#define GAME_H

#include "player.h"

class Game
{
    private:
        int targetNumber;
        bool isCorrectGuess(int guess);

    public:
        Game();
        void start(Player& player);
        bool checkGuess(int guess);
};

#endif
