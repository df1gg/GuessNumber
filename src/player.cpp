#include "player.h"
#include <iostream>


int Player::makeGuess()
{
    std::cout << "Enter your guess: ";
    std::cin >> lastGuess;
    return lastGuess;
}

int Player::getLastGuess() const
{
    return lastGuess;
}

int Player::getAttepmts() const
{
    return attempts;
}

int Player::useAttempt()
{
    if (attempts > 0)
    {
        attempts--;
        return true;
    }
    else
    {
        return false;
    }
}
