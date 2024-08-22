#include <iostream>
#include <cstdlib>
#include <ctime>

#include "game.h"

Game::Game()
{
    std::srand(std::time(0));
    targetNumber = std::rand() % 100 + 1;
}

bool Game::isCorrectGuess(int guess)
{
    return guess == targetNumber;
}

void Game::start(Player& player)
{
    std::cout << "\t" << "  _____                    _   _   _                    _ " << "\n";
    std::cout << "\t" << " |  __ \\                  | | | \\ | |                  | |" << "\n";
    std::cout << "\t" << " | |__) | __ _  _ __    __| | |  \\| | _   _  _ __ ___  | |" << "\n";
    std::cout << "\t" << " |  _  / / _` || '_ \\  / _` | | . ` || | | || '_ ` _ \\ | |" << "\n";
    std::cout << "\t" << " | | \\ \\| (_| || | | || (_| | | |\\  || |_| || | | | | ||_|" << "\n";
    std::cout << "\t" << " |_|  \\_\\\\__,_||_| |_| \\__,_| |_| \\_| \\__,_||_| |_| |_|(_)" << "\n";
    std::cout << "\t" << "                                                          " << "\n";
    std::cout << "\t" << "                                                          " << "\n";

    bool guessedCorrectly = false;
    std::cout << "You target guess number for " << player.getAttepmts() << " attempts\n";
    
    while (!guessedCorrectly && player.useAttempt())
    {
        int guess = player.makeGuess();
        guessedCorrectly = checkGuess(guess);
        std::cout << "You have " << player.getAttepmts() << "!\n";
    }

    if (guessedCorrectly)
    {
        std::cout << "You win! You've guessed the number!" << "\n";
    }
    else
    {
        std::cout << "You lose! Attempts out :(" << "\n";
    }
}

bool Game::checkGuess(int guess)
{
    if (isCorrectGuess(guess))
    {
        return true;
    } 
    else 
    {
        if (guess < targetNumber)
        {
            std::cout << "Too low!" << "\n";
        } 
        else 
        {
            std::cout << "Too high!" << "\n";
        }
        return false;
    }
}
