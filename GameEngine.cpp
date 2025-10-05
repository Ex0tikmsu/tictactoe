#include "GameEngine.hpp"
#include <iostream>
using namespace std;

GameEngine::GameEngine(Player a, Player b) : p1(a), p2(b) {}

void GameEngine::run() {
    Player current = p1;
    while (true) {
        board.printBoard();
        cout << current.name << " (" << current.symbol << "), alege rand si coloana (0-2): ";
        int r, c;
        cin >> r >> c;

        if (!board.placeMove(r, c, current.symbol)) {
            cout << "Mutare invalida! Incearca din nou.\n";
            continue;
        }

        if (board.checkWin(current.symbol)) {
            board.printBoard();
            cout << current.name << " a castigat!\n";
            break;
        }

        if (board.isFull()) {
            board.printBoard();
            cout << "Egalitate!\n";
            break;
        }

        current = (current.symbol == p1.symbol) ? p2 : p1;
    }
}
