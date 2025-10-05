#pragma once
#include "Board.hpp"
#include "Player.hpp"

class GameEngine {
private:
    Board board;
    Player p1;
    Player p2;

public:
    GameEngine(Player a, Player b);
    void run(); // pornește jocul
};
