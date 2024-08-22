#include "game.h"
#include "player.h"


int main() {
    Game game;
    Player player(8);

    game.start(player);

    return 0;
}

