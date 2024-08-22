#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    private:
        int lastGuess;
        int attempts;

    public:
        Player(int attempts) : attempts(attempts) {};
        int makeGuess();
        int useAttempt();
        int getLastGuess() const;
        int getAttepmts() const;
};

#endif
