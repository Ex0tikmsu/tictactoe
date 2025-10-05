#include "GameEngine.hpp"
#include <iostream>
using namespace std;

int main() {
    Player p1("Jucator 1", 'X');
    Player p2("Jucator 2", 'O');

    GameEngine game(p1, p2);
    game.run();

    return 0;
}
